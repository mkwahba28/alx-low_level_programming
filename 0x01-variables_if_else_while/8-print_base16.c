#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print nums from 1 to 9 and letters from a to f
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char digit = 0;
	char alpha;

	while (digit <= 9)
	{
		putchar(digit + '0');
		++digit;
	}
	for (alpha = 'a'; alpha <= 'f'; ++alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
