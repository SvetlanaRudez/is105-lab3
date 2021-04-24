#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    int pid = fork();    // fork a child process

    if(pid > 0)    //if pid greater than 0 - parent process

    {
        printf("This is the parent process.\n");
        sleep(10);  //to create zombie process we can’t use wait(), but we can use sleep() systemcall.

}
    else if (pid == 0)    //if pid equal 0 - child process

{
        printf("This is the child process\n");
        exit(0);   // terminating the child process


    }
    return 0;
}
