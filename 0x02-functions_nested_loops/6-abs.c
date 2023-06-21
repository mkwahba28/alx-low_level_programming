#include "main.h"
#include <stdio.h>

/**
 * _abs - prints the absolute value of an integer.
 * @r: The character to check
 *
 * Description: prints the absolute value of an integer.
 *
 * Return: always 0 (success).
 */

int _abs(int)
{
	int r;

	if (r < 0)
	{
		r = r * -1;
		printf("%d", r);
	}
	else
	{
		printf("%d", r);
	}
	return (0);
}
