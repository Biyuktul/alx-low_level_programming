#include "main.h"

/**
 * _strchr - search for first occurence of a character in a string
 * @s: string to be scanned
 * @c: character to be searched
 * Return: pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
		s++;
	if (*s == c)
		return (s);
	else
		return 0;

}
