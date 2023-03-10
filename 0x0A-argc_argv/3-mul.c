#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	char mul;

	if (argc != 3)
		printf("Error\n");
	else
	{
		mul = argv[1] * argv[2];
		printf("%d", mul);
	}
	return (0);
}
