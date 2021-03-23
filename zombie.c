#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    pid_t pid;
    pid = fork();

    if(pid > 0)
    {
        printf("This is the parent process\n");
        sleep(10);
    }

    else if (pid == 0)
    {

        printf("This is the child process\n");
        exit(0);
    }
    return 0;
}
