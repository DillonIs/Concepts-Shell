#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always returns 0
 */

int main(void)
{
	pid_t my_pid, my_ppid;

	my_pid = getpid();
	my_ppid = getppid();

	printf("Child process %u\n", my_pid);
	printf("Parent process %u\n", my_ppid);
	return (0);
}
