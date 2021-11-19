#include <iostream>
#include <filesystem>
#include <vector>

namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1] == std::string("--help"))
    {
        std::cout << R"(Usage: dirname [OPTION] NAME...
Output each NAME with its last non-slash component and trailing slashes
removed; if NAME contains no /'s, output '.' (meaning the current directory).

  -z, --zero     end each output line with NUL, not newline
      --help     display this help and exit
      --version  output version information and exit

Examples:
  dirname /usr/bin/          -> "/usr"
  dirname dir1/str dir2/str  -> "dir1" followed by "dir2"
  dirname stdio.h            -> ".")" << '\n';

        return 0;
    }
    else if (argc == 1)
    {
        std::cout << "dirname: missing operand\n";
        std::cout << "Try 'dirname --help' for more information.\n";
        return 0;
    }
    else
    {
        std::vector<std::string> all_args;
        all_args.assign(argv + 1, argv + argc);

        std::string sprtr = "\n";
        auto it = all_args.begin();
        while (it != all_args.end())
        {
            if (*it == "-z" || *it == "--zero")
            {
                sprtr = "";
                it = all_args.erase(it);
            }
            else
            {
                ++it;
            }
        }

        for (auto a : all_args)
        {
            std::string str{a};

            while ((str.back() == '/') || (str.back() == '\\'))
            {
                str.erase(str.size()-1);
            }

            fs::path p{str};
            //std::filesystem::canonical(p);
            // https://stackoverflow.com/questions/36941934/parent-path-with-or-without-trailing-slash
            if (p.lexically_normal().parent_path().string() == "")
            {
                std::cout << "." << sprtr;
            }
            else
            {
                std::cout << p.lexically_normal().parent_path().string() << sprtr;
            }
        }
    }
}
