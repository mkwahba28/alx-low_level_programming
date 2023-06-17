#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing combinations of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit, digit2;

	for (digit = 0; digit <= 9; ++digit)
	{
		for (digit2 = 0; digit2 <= 9; ++digit2)
		{
			if (digit == digit2)
			{
				continue;
			}
			if (digit == 1 && digit2 == 0)
			{
				continue;
			}
			if (digit > digit2)
			{
				continue;
			}
			if (digit == 8 && digit2 == 9)
			{
				putchar(digit + '0');
				putchar(digit2 + '0');
			else
			{
				putchar(digit + '0');
				putchar(digit2 + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	return (0);
}
