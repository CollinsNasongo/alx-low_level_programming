#include "main.h"

/**
 * get_strlen - a function that gets the length of a string
 *
 * @s: The string
 *
 * Return: The length of the string.
 */
int get_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += get_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - a function that checks if a string is a palindrome
 *
 * @s: the string
 * @len: the length of the string
 * @i: the index of the string to be checked.
 *
 * Return: 1 if the string is palindrome otherwise 0
 */
int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, len, i + 1));

	return (0);
}

/**
 * is_palindrome - a function that checks if a string is a palindrome
 *
 * @s: the string
 *
 * Return: 1 if the string is palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = get_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, i));
}
