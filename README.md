# simple_shell
   * [Description](https://github.com/Reda-codes/simple_shell#Description)
   * [Requirements](https://github.com/Reda-codes/simple_shell#Requirements)
   * [Installation](https://github.com/Reda-codes/simple_shell#Installation)
   * [Usage](https://github.com/Reda-codes/simple_shell#Usage)
   * [Testing](https://github.com/Reda-codes/simple_shell#Testing)
   * [Authors](https://github.com/Reda-codes/simple_shell#Authors)
# Description
simple_shell is a command line interpreter, or shell, in the tradition of the first Unix shell written by Ken Thompson in 1971. This shell is intentionally minimalistic, yet includes the basic functionality of a traditional Unix-like command line user interface. Standard functions and system calls employed in simple_shell include:`access, execve, exit, fork, free, fstat, getline, malloc, perror, signal, stat, wait, write.`
# Installation
   * Clone this repository: `git clone https://<Your key>@github.com/Reda-codes/simple_shell.git`
   * Change directories into the repository: `cd simple_shell`
   * Compile: `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
   * Run the shell in interactive mode: `./hsh`
   * Or run the shell in non-interactive mode: example `echo "pwd" | ./hsh`
# Usage
The simple_shell is designed to execute commands in a similar manner to sh, however with more limited functionality. The development of this shell is ongoing. The below features will be checked as they become available (see man page for complete information on usage):
#Testing
