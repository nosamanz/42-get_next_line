#include <stdio.h>
#include "get_next_line.h"
//#include "get_next_line_bonus.h"

int main(void)
{
    int     i;
    char    *line;
    char    *line2;
    int     fd;
    int     fd2;
    i = 0;
    fd = open("test0.txt", O_RDONLY);
    fd2 = open("test3.txt", O_RDONLY);
    line = get_next_line(fd);
    printf("%s", line);
    line2 = get_next_line(fd2);
    printf("%s", line2);
}
/*
int main(void)
{
    
    char    *line;
    char    *line2;
    int     fd;
    int     fd2;
    
    fd = open("test0.txt", O_RDONLY);
    fd2 = open("test3.txt", O_RDONLY);
    line = get_next_line(fd);
    printf("%s", line);
    line2 = get_next_line(fd2);
    printf("%s", line2);
}
*/
