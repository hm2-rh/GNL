# get_next_line

## Goal

The aim of this project is to create a function that returns a line ending with a newline, read from a file descriptor.

|||
|-|-|
__Function name__   | get_next_line
__Prototype__       | int get_next_line(int fd, char **line);
__Parameters__      | 1. file descriptor for reading<br>2. The value of what has been read
__Return values__   | 1: A line has beer read<br>0: EOF has been reached<br>-1: An error happened
|||

## Compilation

When compiling, be sure to add the flag `-D BUFFER_SIZE=xx` which will be used to determine the size of the reading buffer.

example:

```sh
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c
```

## Usage

Create a `main.c`

```c
int main()
{
        int fd;
        char *line;

        fd = open("test.txt", O_RDONLY);
        while (get_next_line(fd, &line))
        {
                printf("line = %s\n", line);
                free(line);
        }
        close(fd);
}
```

Then compile it using the command:

```sh
gcc -Wall -Wextra -Werror -D BUFFER_SIZE=32 get_next_line.c get_next_line_utils.c main.c
```

Run it as follows

```sh
./a.out
```
