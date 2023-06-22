#include "main.h"

/**
 * _isupper - checks if c is uppercase
 * @c: character to be checked
 *
 * Description: printer character 
 * 
 * Return: 1 if uppercase, 0 if not
 */

int _isupper(c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
