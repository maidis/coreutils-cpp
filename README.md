# coreutils-cpp

[The GNU Core Utilities](https://www.gnu.org/software/coreutils/) are the basic file, shell and text manipulation utilities of the GNU operating system. These are the core utilities which are expected to exist on every operating system. [Mirror of coreutils' repository](https://github.com/coreutils/coreutils).

[coreutils-cpp](https://github.com/maidis/coreutils-cpp) is a project that aims to reimplement GNU Core Utilities in Modern C++.

| Utility |Definition | Completeness | Purity |
| ------- |---------- | ------------ | ------ |
|base64|Encodes binary strings into text representations using the base64 encoding format|||
|basename|Removes the path prefix from a given pathname|||
|cat|Concatenates and prints files on the standard output|||
|chcon|Changes file security context|||
|chgrp|Changes file group ownership|||
|chmod|Changes the permissions of a file or directory|||
|chown|Changes the user and/or group ownership of a given file, directory, or symbolic link|||
|chroot|Changes the root directory|||
|cksum|Checksums and counts the bytes in a file|||
|comm|Compares two sorted files line by line|||
|[cp](https://github.com/maidis/coreutils-cpp/tree/main/cp)|Copies a file or directory|||
|csplit|Splits a file into context-determined pieces|||
|cut|Cuts sections from each line of a file|||
|date|Displays the system date and time|||
|dd|Duplicates disk or data|||
|df|Displays the amount of available disk space for file systems|||
|[dirname](https://github.com/maidis/coreutils-cpp/tree/main/dirname)|Strips non-directory suffix from file name|||
|du|Shows disk usage on file systems|||
|echo|Displays a specified line of text|||
|env|Displays and modifies environment variables|||
|expand|Converts tabs into spaces|||
|expr|Evaluates expressions|||
|factor|Factors numbers|||
|[false](https://github.com/maidis/coreutils-cpp/tree/main/false)|Exits unsuccessfully, returns 1|||
|fmt|Simplifies and optimizes text files|||
|fold|Wraps each line in an input file to fit a specified width and prints it to the standard output|||
|groups|Prints the groups of which the user is a member|||
|head|Prints the first lines of one or more files or piped data to standard output|||
|hostid|Prints the numeric identifier for the current host|||
|hostname|Views or changes a system's domain and hostname|||
|id|Prints real or effective UID and GID|||
|install|Copies files to a specified destination and set attributes|||
|join|Joins the two files based on a key field present in both the files|||
|kill|Sends a signal to specified processes or process groups causing them to act according to the signal|||
|link|Createss a link to a file|||
|ln|Creates a hard link or a symbolic link to an existing file or directory|||
|logname|Prints the user's login name|||
|[ls](https://github.com/maidis/coreutils-cpp/tree/main/ls)|Lists the files in a directory|||
|md5sum|Verifies data integrity using MD5|||
|mkdir|Creates one or more new directories|||
|mkfifo|Makes a FIFO special file with name pathname|||
|mknod|Creates a filesystem node|||
|mktemp|Creates a temporary file or directory|||
|mv|Moves one or more files or directories from one place to another|||
|nice|Modifies scheduling priority|||
|nl|Numbers the lines in a file|||
|nohup|Allows a command to continue running after logging out|||
|[nproc](https://github.com/maidis/coreutils-cpp/tree/main/nproc)|Prints the number of processing units available|||
|numfmt|Converts the numbers to/from human readable format|||
|od|Displays content of a file in different human-readable formats like hexadecimal, octal and ASCII characters|||
|paste|Joins files horizontally|||
|pathchk|Checks whether file names are valid or portable|||
|pinky|Fetch information related to system users|||
|pr|Prepares a text file for printing|||
|printenv|Prints environment variables|||
|printf|Formats and prints data|||
|ptx|Rroduces a permuted index of file contents|||
|[pwd](https://github.com/maidis/coreutils-cpp/tree/main/pwd)|Prints the current working directory|||
|readlink|Displays value of a symbolic link|||
|realpath|Prints the resolved path|||
|rm|Removes files or directories|||
|rmdir|Removes an empty directory|||
|runcon|Runs command with specified security context|||
|seq|Prints a sequence of numbers|||
|shred|Securely delete files and devices so that it is extremely difficult to recover them|||
|shuf|Generates random permutations from input lines to standard output|||
|[sleep](https://github.com/maidis/coreutils-cpp/tree/main/sleep)|Delays for a specified amount of time|||
|sort|Sorts the file contents in ascending order by default|||
|split|Splits files into multiple files|||
|stat|Returns file attributes about an inode|||
|sum|Displays the checksum and block count of a file|||
|tac|Concatenates and prints files in reverse|||
|tail|Shows data from the end of a file|||
|tee|Sends output to multiple files|||
|timeout|Runs a command with a time limit|||
|touch|Updates the access date and/or modification date of a computer file or directory|||
|tr|Translates or deletes characters|||
|[true](https://github.com/maidis/coreutils-cpp/tree/main/true)|Exits successfully, returns 0|||
|truncate|Shrink or extend the size of a file to a given size|||
|tsort|Performs a topological sort on its input|||
|tty|Prints terminal name|||
|uname|Prints system information|||
|unexpand|Converts spaces to tabs|||
|uniq|Filter adjacent matching lines from input|||
|unlink|Removes the specified file using the unlink function|||
|uptime|Tells how long the system has been running|||
|wc|Count the number of lines, words, and bytes in the files or standard input|||
|who|Displays a list of users who are currently logged into the computer|||
|[whoami](https://github.com/maidis/coreutils-cpp/tree/main/whoami)|Prints the effective username of the current user when invoked|||
|[yes](https://github.com/maidis/coreutils-cpp/tree/main/yes)|Outputs an affirmative response, or a user-defined string of text, continuously until killed|||

There are dozens of similar projects written in C++ or other programming languages:

- [uutils/coreutils](https://github.com/uutils/coreutils) (Rust)
- [redox-os/coreutils](https://github.com/redox-os/coreutils) (Rust)
- [ericlagergren/go-coreutils](https://github.com/ericlagergren/go-coreutils) (Go)
- [vlang/coreutils](https://github.com/vlang/coreutils) (V)
- [dct2012/coreutils](https://github.com/dct2012/coreutils) (C++)
- [junaire/jutils](https://github.com/junaire/jutils) (C++)
- [dazmaks/linuxcommands](https://github.com/dazmaks/linuxcommands) (C#)
