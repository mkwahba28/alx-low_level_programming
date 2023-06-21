#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to check
 *
 * Description: returns 1 if the character is lowercase
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
