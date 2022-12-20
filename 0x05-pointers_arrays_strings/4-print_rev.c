#include "main.h"

/**
 * print_rev - prints string in reverse followed by a new line
 * @s: input string
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (count >= 0)
	{
		if (s[count] == '\n')
			break;
		count++;
	}

	for (count--; count >= 0; count--)
		_putchar(s[count]);
	_putchar('\n');
}
