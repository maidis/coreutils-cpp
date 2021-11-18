#include <filesystem>
#include <iostream>

#if __has_include(<windows.h>)
    #include <windows.h>
    #define have_windows_h 1
    #define BUFSIZE MAX_PATH
#else
    #include <unistd.h>
    #define have_windows_h 0
#endif

namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1] == std::string("--help"))
    {
        std::cout << R"(pwd: pwd [-LP]
    Print the name of the current working directory.

    Options:
      -L        print the value of $PWD if it names the current working
                directory
      -P        print the physical directory, without any symbolic links

    By default, `pwd' behaves as if `-L' were specified.

    Exit Status:
    Returns 0 unless an invalid option is given or the current directory
    cannot be read.)" << '\n';

        return 0;
    }
    // https://stackoverflow.com/questions/298510/how-to-get-the-current-directory-in-a-c-program
    // https://www.delftstack.com/howto/cpp/get-current-directory-cpp/
    else if (argc == 1 || (argc == 2 && argv[1] == std::string("-L")))
    {
        #if have_windows_h == 0
            char *cwd = get_current_dir_name();
            std::cout << cwd << std::endl;
            free(cwd);
        #else
            TCHAR Buffer[BUFSIZE];
            char *cwd = GetCurrentDirectory(BUFSIZE, Buffer);
            std::cout << cwd << std::endl;
            free(cwd);
        #endif
    }
    else if (argc == 2 && argv[1] == std::string("-P"))
    {
        std::cout << fs::current_path().string() << std::endl;
    }
    else
    {
        std::cout << "pwd: " << argv[1] << ": invalid option\n";
        std::cout << "pwd: usage: pwd [-LP]\n";
        return 1;
    }
    return 0;
}
