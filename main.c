#include "main.h"

/**
 * exec - executes the command
 * @cmd: command input
 * Return: 0 on success1 -1 if exit and 1 if other error
 */
int exec(char *cmd)
{
	int state;
	pid_t child_pid;

	if (strncmp("exit", cmd, 4) == 0)
		return (-1);

	child_pid = fork();

	if (child_pid == -1)
	{
		perror("Error:");
		return (1);
	}
	else if (child_pid == 0)
	{
		char *argv[] = {"", NULL};

		if (execve(cmd, argv, NULL) == -1)
		{
			perror("Error:");
			exit(-1);
		}
	}
	else
	{
		wait(&state);
	}

	return (0);
}

/**
 * main - simple shell
 * @argc: number of input arguments
 * @argv: list of input arguments
 * Return: 0, -1 on error.
 */

int main(int argc, char const *argv[])
{

	char *buffer;
	const char separator[] = " ";
	int res;
	char *tkn;
	size_t size = 32;
	int isPipe = 0;

	if (argc == 2)
	{
		char buffer[strlen(argv[1])];

		strcpy(buffer, argv[1]);
		exec(buffer);
		return (1);
	}

	buffer = (char *)malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	do {
		if (isatty(fileno(stdin)))
		{
			isPipe = 1;
			printf("cisfun#: ");
		}

		getline(&buffer, &size, stdin);
		tkn = strtok(buffer, separator);
		buffer[strlen(buffer) - 1] = '\0';
		res = exec(tkn);
	} while (isPipe && res != -1);

	return (0);
}
