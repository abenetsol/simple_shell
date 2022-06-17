#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
/**
 * main - fork example
 *
 * Return: Always 0.
 */
int main(void)
{
    char *argv[] = {"/bin/ls", "-l", "/tmp/", NULL};
    pid_t my_pid;
    pid_t pid;
    printf("Before fork\n");
    pid = fork();
    if (pid == -1)
    {
        perror("Error:");
        return (1);
    }
    printf("After fork\n");
    for(int i=0;i<5;i++) // loop will run n times (n=5)
    {
        if(fork() == 0)
        {
		printf("[son] pid %d from [parent] pid %d\n",getpid(),getppid());
	        exit(0);
        }
    }
    for(int i=0;i<5;i++) // loop will run n times (n=5)
      wait(NULL);
    my_pid = getpid();
    printf("My pid is %u\n", my_pid);
     execve(argv[0],argv,NULL);
    return (0);
}
