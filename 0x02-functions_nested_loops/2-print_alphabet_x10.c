#include <main.h>

/**
 * main - check the code
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char c;

	for (int i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		putchar('\n');
	}
	return (0);
}
