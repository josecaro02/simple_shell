#include "header.h"

/**
 * main - Display prompt.
 *
 * Return: Always 0.
 */

int main(void)
{
	char *prompt = "#cisfun$ ", *buffer = NULL, *token = NULL, *argv[256];
	size_t size = 1024;
	pid_t child;
	int i = 0, j = 1;

	do {
		if (isatty(STDIN_FILENO) == 1)
			write(1, prompt, 9);
		signal(SIGINT, signalhandler);
		i = getline(&buffer, &size, stdin);
		if (i == -1)
		{
			(isatty(STDIN_FILENO) == 1) ? write(1, "\n", 1) : 1;
			free(buffer);
			return (0);
		}
		if (_strcmp(buffer, "exit\n") == 0)
		{
			free(buffer);
			return (0);
		}
		child = fork();
		if (child == -1)
			return (1);
		if (child == 0)
		{
			argv[0] = token = strtok(buffer, " \n");
			for (; token; token = strtok(NULL, " \n"))
				argv[j] = token;
			argv[j] = NULL;
			if (argv[0][0] != '.')
				path(&argv[0]);
			if (execve(argv[0], argv, NULL) == -1)
				perror("Error");
			exit(0);
		}
		else
			wait(NULL);
	} while (1);
	return (0);
}
