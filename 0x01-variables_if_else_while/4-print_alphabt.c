#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters in lower case except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'e' || ch == 'q')
			continue;
		else
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
