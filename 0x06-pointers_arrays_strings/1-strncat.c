#include "main.h"

/**
 * strncat - function to concatenate two strings using only at most n bytes from src
 *
 * @dest: pointer to string we want to append to
 * @src: pointer to string to be appended
 * @n: max number of characters to be appended
 *
 * Return: pointer to the first string
 */
char *_strncat(char *dest, char *src, int n)
{
        char *start = dest;
        int num = 0;
        while (*dest)
        {
                dest++;
        }
        dest--;

        if (*dest != '\n')
        {
                dest++;
        }

        while (num < n)
        {
                *dest = *src;
                dest++;
                src++;
                num++;
        }

        *dest = '\0';
        return (start);
}
