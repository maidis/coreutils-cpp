#include <iostream>
#include <thread>
#include <omp.h>

namespace fs = std::filesystem;

int main(int argc, char *argv[])
{
    if (argc == 2 && argv[1] == std::string("--help"))
    {
        std::cout << R"(Usage: nproc [OPTION]...
Print the number of processing units available to the current process,
which may be less than the number of online processors

      --all      print the number of installed processors
      --ignore=N  if possible, exclude N processing units
      --help     display this help and exit
      --version  output version information and exit)" << '\n';

        return 0;
    }
    else if (argc == 1)
    {
        std::cout << "This feature is not implemented yet :(\n";
        std::cout << "see: https://stackoverflow.com/questions/150355/programmatically-find-the-number-of-cores-on-a-machine\n";

        #pragma omp parallel
        {
            int id = omp_get_num_procs();
            std::cout << id << "\n";
        }

        return 0;
    }
    else if (argc == 2 && argv[1] == std::string("--all"))
    {
        //may return 0 when not able to detect
        const auto processor_count = std::thread::hardware_concurrency();
        std::cout << processor_count << "\n";
    }
}
