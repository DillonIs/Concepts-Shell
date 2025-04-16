#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *
 *
 *
 *
 */

int main(void)
{
	char *string = malloc(1024);
	size_t len = 1024;
	long unsigned int index, count;

	if (string == NULL)
	{
		return(1);
	}

	printf("Input a string: ");
	getline(&string, &len, stdin);
	printf("Inputted string: %s", string);
	count = 0;

	for (index = 0; index <= sizeof(string); index++)
	{
		if (string[index] == ' ' || string[index] == '\0')
		{
			string[index] = '\0';
			count++;
		}
		else
		{
			index++;
		}
	}

	for (index = 0; index < count; index++)
	{
		printf("%s\n", string);
	}

	return (0);
}
