#include "main.h"

/**
 * print_numbers - prints from 0 to 9
 *
 * Description: function prints from 1 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	for (int i = 0; i < 10; i++)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
