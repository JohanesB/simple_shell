#include <stdio.h>
#include <stdlib.h>

int isExt(char *buffer)
{
	char *exit = "exit";
	int i;

	for (i = 0; i < 4; i++)
	{
		if (exit[i] != buffer[i])
		{
			return (1);
		}
	}
	return (0);
}

int main(void)
{

	size_t txt, size = 32;
	char *buffer;

	buffer = (char *)malloc(size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Unable to allocate buffer");
		exit(1);
	}

	do {
		printf("cisfun#: ");
		txt = getline(&buffer, &size, stdin);
		printf("%ld characters were read.\n", txt);
		printf("You typed: %s", buffer);

	} while (isExt(buffer));

	return (0);
}
