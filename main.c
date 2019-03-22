#include <termcap.h> //tgetent
#include <stdio.h> //printf
#include <stdlib.h> //exit

int main()
{
    int ret;
    char *buffer;
    char *termtype = getenv ("TERM");

    ret = tgetent (buffer, termtype);

    if (ret == -1) {
        perror("");
        exit(1);
    }
    else
    {
        printf("%d\n", ret);
    }
    
    printf("buffer: [%s]\n", buffer);
    printf("termtype: [%s]\n", termtype);
    return(0);
}