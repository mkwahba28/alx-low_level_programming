#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
    char ch;
    char CH = 'A';

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
        putchar(CH);
        putchar('\n');
        CH++;
    }

    return (0);
}
