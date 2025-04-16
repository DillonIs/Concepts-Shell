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
	char *str1 = malloc(1024);
	size_t len = 1024;
	int index, colindex, count;

	printf("Input string: ");
	getline(&str1, &len, stdin);

	colindex = 0;
	count = 0;

	for (index = 0; index <= str1[index + 1]; index++)
	{
		if (str1[index] == ' ' || str1[index] == '\0')
		{
			len = '\0';
			count++;
			colindex = 0;
		}
		else
		{
			len = str1[index];
			colindex++;
		}
	}

	for (index = 0; index < count; index++)
	{
		printf("%s\n", str1);
	}

	return (0);
}
