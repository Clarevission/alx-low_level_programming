#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the char to stdout
 * @s: is the char to print
 * Return: 1 (success)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
