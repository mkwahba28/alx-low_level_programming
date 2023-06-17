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
    char CH;

    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }
    for (CH = 'A'; CH <= 'Z'; CH++)
    {
        putchar(CH);
    }
    putchar('\n');
    return (0);
}
