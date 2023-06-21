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

int _abs(int r)
{
	if (r < 0)
	{
		r = -1 * r;
		return (r);
	}
	else
		return (r);
}
