#include <stdio.h>
/**
 * main - main block
 * Description: print all single digit numbers fo base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void);
{
	int a;

	for (a = 0; a < 10; a++)
		printf("%d", a);
	putchar('\n');
	return (0);
}
