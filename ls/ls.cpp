#include <filesystem>
#include <iostream>

#if __has_include(<windows.h>)
#  include <windows.h>
#  define have_windows_h 1
#else
#  define have_windows_h 0
#endif

int main(int argc, char *argv[])
{
    namespace fs = std::filesystem;
    
    auto p = (argc > 1) ? argv[1] : fs::current_path();
    
    #if have_windows_h == 0
        for (auto e : fs::directory_iterator{p})
        {
            if (!std::string(e.path().filename().native()).starts_with("."))
            {
                std::cout << e.path().filename().native() << '\t';
            }
        }
    #else
        for (auto e : fs::directory_iterator{p})
        {
            // https://stackoverflow.com/questions/33174622/is-it-possible-to-create-a-hidden-txt-file-in-c/33175029
            if ((GetFileAttributes(e.path().filename().native()) & FILE_ATTRIBUTE_HIDDEN) == 0)
            {
                std::cout << e.path().filename().native() << '\t';
            }
        }
    #endif
    std::cout << '\n';
}
