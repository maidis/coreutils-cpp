#include <iostream>
#include <string>
#include <vector>

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1] == std::string("--help"))
    {
        std::cout << R"(Usage: yes [STRING]...
  or:  yes OPTION
Repeatedly output a line with all specified STRING(s), or 'y'.

      --help     display this help and exit
      --version  output version information and exit)" << '\n';

        return 0;
    }

    else if (argc == 1)
    {
        while(true)
        {
            std::cout << "y\n";
        }
    }

    else
    {
        // https://stackoverflow.com/questions/15344714/convert-command-line-argument-to-string
        std::vector<std::string> all_args;
        all_args.assign(argv + 1, argv + argc);
        while(true)
        {
            for (auto a : all_args)
            {
                std::cout << a << " ";
            }
            std::cout << '\n';
        }
    }

    return 0;
}
