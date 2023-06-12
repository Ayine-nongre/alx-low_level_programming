#include "main.h"
#include "stdlib.h"

/**
 * argstostr - converts arguments to strings
 * @ac: argument count
 * @av: argument
 * Return: string pointer
 */

char *argstostr(int ac, char **av)
{
	int count = 0, j, i, k = 0;
	char *str;

	if (ac == 0 || av == NULL)
		putchar('\0');

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
	}

	str = malloc(sizeof(str) * (count + ac + 1));
	if (str == NULL)
	{
		free(str);
		_putchar('\0');
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j + 1] == '\0')
			{
				str[k] = av[i][j];
				str[k + 1] = '\n';
				k += 2;
			}
			else
			{
				str[k] = av[i][j];
				k++;
			}

		}
	}

	return (str);
}
