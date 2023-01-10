#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: counts the arguments
 * @argv: the arguments
 *
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
