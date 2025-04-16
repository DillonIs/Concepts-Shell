#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @ac: Number of items in av
 * @av: NULL terminated array of strings
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int index = 0;

	while (av[index])
	{
		printf("%s ", av[index]);
		index++;
	}
	printf("\n");
	return (0);
}
