#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int ret;
    int fd;
    char buf[1024];

    fd = open("ls.output", O_RDONLY);
    ret = read(fd, buf, sizeof(buf));
    write(1, buf, strlen(buf));
}