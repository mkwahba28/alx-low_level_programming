#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: printing combinations of three digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit, digit2, digit3;

	for (digit = 0; digit <= 9; ++digit)
	{
		for (digit2 = 0; digit2 <= 9; ++digit2)
		{
			for (digit3 = 0; digit3 <= 9; ++digit3)
			{
				if (digit == digit2 || digit == digit3 || digit2 == digit3)
				{
					continue;
				}
				if (digit > digit2 || digit2 > digit3 || digit > digit3)
				{
					continue;
				}
				if (digit > digit2)
				{
					continue;
				}
				else
				{
					putchar(digit + '0');
					putchar(digit2 + '0');
					putchar(digit3 + '0');
					if (digit == 7 && digit2 == 8 && digit3 == 9)
					{
						continue;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
