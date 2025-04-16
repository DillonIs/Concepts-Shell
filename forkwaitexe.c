#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 *
 *
 *
 */

int main(void)
{
	pid_t my_pid, child_pid;
	int index;
	int status;
	char *argv[] = {"bin/ls", "-l", "tmp/", NULL};

	child_pid = 1;
	my_pid = getpid();

	for (index = 0; index <= 4 && (child_pid != 0); index++)
	{
		child_pid = fork();
		if (child_pid == -1)
		{
			printf("ERROR");
			return (1);
		}
		wait(&status);
	}
	if (child_pid == 0)
	{
		printf("Child ID: %u\n", getpid());
		printf("Parent ID: %u\n", getppid());
	}
	else
	{
		printf("%u Parent and my ID: %u\n", my_pid, child_pid);
	}
	if (execve(argv[0], argv, NULL) == -1)
	{
		printf("ERROR\n");
		return (1);
	}
	
	return (0);
}
