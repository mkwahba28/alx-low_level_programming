#include "main.h"

/**
 * _strlen - return the length of a string
 * @s: string to count
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int count = 0;

	for (; *s != '\0'; s++)
	{
		count++;
	}
	return (count);
}
