#include "main.h"

/**
 * main - Entry point
 *
 * Description: returns 1 if the character is lowercase
 * @c: character to be checked
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
