# Simple Shell
## Describe the function that emulates the functionality of "sh" in linux
# Introduction
This document describe the functionality of this program that emulates in most of the characteristics of the command language interpreter "sh" of Linux.

# Download
```
$ git clone https://github.com/josecaro02/simple_shell.git
```
# Use
With the next command you can compile the whole project with the name that you want, but for this manual we name it "hsh"

```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
Now your are able to use it executing it typing

```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
$
```
There are two more ways to execute this program with:
-The first one only execute the program one time, like this:
```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ echo "ls" | ./hsh
file1 file2 file3.c file4.js
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$
```
-The second one execute this program based in sentences saved in a file like this

```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ cat test_file
/bin/ls
ls
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ cat test_file | ./hsh
file1 file2 file3.c file4.js
file1 file2 file3.c file 4.js
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$
```

# Exit program
There are two ways to exit this program typing "Ctrl + d" or exit
```sh
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ ./hsh
$ exit 100
vagrant@vagrant-ubuntu-trusty-64:~/simple_shell$ echo $?
100
```
# Built with
Ubuntu 14.04 and C language in Emacs.

#Authors
[José David Caro Cantor] - (www.github/josecaro02)
[Sebastian Chingate Cepeda] - (www.github/sebastianchc)
