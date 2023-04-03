#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a character in a string
 * @c: character in the string
 * @s: pointer to the first occurrence of the character
 * Return: NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
return (0);
}
