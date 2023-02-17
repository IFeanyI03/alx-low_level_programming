#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int d, c;
	for (d = 0; d < 10; d++)
	{
		putchar (d + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar (c);
	}

	putchar('\n');
	return (0);
}
