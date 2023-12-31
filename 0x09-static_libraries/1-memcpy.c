#include "main.h"
/**
 * _memcpy - function that copies memory area.
 *
 * @dest: destination pointer
 * @src: memory area to be copied
 * @n: copies n bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	if (*src != '\0')
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
