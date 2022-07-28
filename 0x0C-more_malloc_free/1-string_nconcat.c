#include "main.h"

/**
 * string_nconcat - a function that concatenates 2 strings
 *
 * @s1: destination
 * @s2: source
 * @n: number of bytes to concatenate from s2
 *
 * Return: pointer to concatenated string or NULL if failure occurs
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *con_str;
	unsigned int idx, len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = n;
	len2 = 0;
	for (idx = 0; s1[idx]; idx++)
		len1++;
	con_str = malloc(sizeof(char) * (len1 + 1));
	if (con_str == NULL)
		return (NULL);
	for (idx = 0; s1[idx]; idx++)
		con_str[len2++] = s1[idx];
	for (idx = 0; s2[idx] && idx < n; idx++)
		con_str[len2++] = s2[idx];
	con_str[len2] = '\0';
	return (con_str);

}
