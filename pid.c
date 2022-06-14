#include <stdio.h>
#include <unistd.h>

/**
 * main - PID
 *
 x* Return: Always 0.
 */
int main(void)
{
    pid_t my_pid;

    my_pid = getpid_max();
    printf("%u\n", my_pid);
     printf("%u\n", my_pid);
    return (0);
}
