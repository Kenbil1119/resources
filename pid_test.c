#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

/**
 * main - Get and print the current processs id (PID)
 *
 * new_id: Variable to store ID value
 *
 * Return: Always 0
 *
 * Author: Usman Saheed .K
 */

int main(void)
{
	pid_t new_id;

	/* Parent ID get and print out*/
	printf("Current Parent Process ID: %d\n", getppid());

	/* Child ID get and print out */
	new_id = getpid();
	printf("Current Child Proces ID: %d\n", new_id);

	/* Current Process Forked */
	new_id = fork();

	/* A fork of the Current process Id */
	printf("Fork ID: %d\n", new_id);


	if (new_id > 0)
	{
		/* This should print the Current Parent and Child ID */
		printf("Parent Process ID created:(%d), ", getpid());
		printf("created Child Process ID: %d\n", new_id);
	}
	else
		if (new_id == 0)
			printf("Child Process ID created: %d\n", getpid());
		else
		{
			printf("Fork Failed\n");

			return (1);
		}

	return (0);
}
