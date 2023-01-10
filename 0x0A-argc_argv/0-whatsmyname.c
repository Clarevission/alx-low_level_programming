#include <stdio.h>
#include "main.h"

/**
 * main - print the name of the program
 * @argc: counts the arguments
 * @argv: the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
