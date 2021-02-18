#include <chrono>
#include <ratio>
#include <thread>
#include <string>
#include <iostream>
#include <charconv>

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        std::cout << "sleep: missing operand\n"
                  << "Try 'sleep --help' for more information.\n";
    }
    else if (std::string(argv[1]) == "--help")
    {
        std::cout << "Usage: sleep NUMBER[SUFFIX]...\n"
                  << "or:  sleep OPTION\n"
                  << "Pause for NUMBER seconds.  SUFFIX may be 's' for seconds (the default),\n"
                  << "'m' for minutes, 'h' for hours or 'd' for days.  NUMBER need not be an\n"
                  << "integer.  Given two or more arguments, pause for the amount of time\n"
                  << "specified by the sum of their values.\n\n"
                  << "--help     display this help and exit\n";
    }
    else
    {
        for(int i = 1; i < argc; ++i)
        {
            std::string str = argv[i];
            int number;
            if(str.ends_with('s'))
            {
                std::from_chars(str.data(), str.data()+str.size()-1, number);
            }
            else if(str.ends_with('m'))
            {
                std::from_chars(str.data(), str.data()+str.size()-1, number);
                number = number * 60;
            }
            else if(str.ends_with('h'))
            {
                std::from_chars(str.data(), str.data()+str.size()-1, number);
                number = number * 60 * 60;
            }
            else if(str.ends_with('d'))
            {
                std::from_chars(str.data(), str.data()+str.size()-1, number);
                number = number * 60 * 60 * 24;
            }
            else
            {
                std::from_chars(str.data(), str.data()+str.size(), number);
            }
            
            std::this_thread::sleep_for(std::chrono::seconds(number));
        }
    }
    return 0;
}
