#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9 except 2 & 4.
 * followed by a new line
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + 48);
		}
	}
	_putchar('\n');
}
