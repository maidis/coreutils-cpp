#include <iostream>
#include <filesystem>

int main(int argc, char *argv[])
{
    if(argc == 1)
    {
        std::cout << argv[0] << ": missing file operand\n";
    }
    else if(argc == 2)
    {
        std::cout << argv[0] << ": missing destination file operand after '" << argv[1] <<"'\n";
    }
    else if(argc == 3)
    {
        std::filesystem::copy(argv[1], argv[2]);
    }
    else
    {
        for(int i = 1; i < argc - 1; ++i)
        {
            std::filesystem::copy(argv[i], argv[argc -1]);
        }
    }

    return 0;
}
