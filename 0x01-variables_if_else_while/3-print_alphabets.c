#include <stdio.h>
#include <ctype.h>

/**
 * main - print alphabets in lowercase and uppercase letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char lowerUpper[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int i = 0;

        while (i < 52)
        {
                putchar(lowerUpper[i]);
                i++;
        }
        putchar('\n');
        return (0);
}

