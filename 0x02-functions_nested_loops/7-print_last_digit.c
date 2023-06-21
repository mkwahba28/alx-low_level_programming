#include "main.h"
#include <stdio.h>

/**
 * print_last_digit - prints the last digit of a number.
 * @r: The character to check
 *
 * Description: prints the last digit of a number.
 *
 * Return: always 0 (success).
 */

int print_last_digit(int r)
{
        int last_digit = r % 10;

        if (r < 0)
		last_digit = last_digit * -1;
	_putchar('0', last_digit);
        return (last_digit);
}
