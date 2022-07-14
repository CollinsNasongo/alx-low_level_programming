#include "main.h"
#include <stdio.h>

char *_strcat(char *dest, char *src)
{
        int dest_length = 0;
        int src_length = 0;
        int i, j, k;

        for (i = 0; dest != '\0'; i++)
                dest_length++;
        for (j = 0; src != '\0'; j++)
                src_length++;
        for (k = 0; k <= src_length; k++)
        {
                dest[dest_length + k] = src[k];
        }

        return (dest);
}


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
