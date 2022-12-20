#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: char array type
 * Description: if odd number or chars print (length - 1) / 2
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
