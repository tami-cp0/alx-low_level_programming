#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0;
	int length, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	length = len1 + len2;
	ptr = malloc((length + 1) * sizeof(char));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			ptr[i] = s1[i];
		}
		for (j = 0; j < len2; j++)
		{
			ptr[i + j] = s2[j];
		}

		return (ptr);
	}
}
