#include <stdio.h>
/**
 * main function printing alphabet characters
 */
int main (void)
{
	char alphabets;
	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return(0);
}
