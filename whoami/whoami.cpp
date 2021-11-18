#include <iostream>

#if __has_include(<windows.h>)
    #include <windows.h>
    #define have_windows_h 1
    #define INFO_BUFFER_SIZE 32767
#else
    #include <unistd.h>
    #include <pwd.h>
    #define have_windows_h 0
#endif

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1] == std::string("--help"))
    {
        std::cout << R"(Usage: whoami [OPTION]...
Print the user name associated with the current effective user ID.
Same as id -un.

      --help     display this help and exit
      --version  output version information and exit)" << '\n';

        return 0;
    }
    else if (argc == 1)
    {
        // https://stackoverflow.com/questions/2189245/how-can-i-get-the-username-of-the-person-executing-my-program
        #if have_windows_h == 1
            bufCharCount = INFO_BUFFER_SIZE;
            GetUserName(infoBuf, &bufCharCount);
            std::cout << infoBuf << std::endl;
        // https://pubs.opengroup.org/onlinepubs/009695399/functions/getpwuid.html
        #else
            struct passwd *pwd;
            pwd = getpwuid(geteuid());
            std::cout << pwd->pw_name << std::endl;
        #endif
    }
    else
    {
        std::cout << "unrecognized option '" << argv[1] << "'\n";
    }
    return 0;
}
