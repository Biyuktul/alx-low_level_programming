#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Difference of the two
 */

int _strcmp(char *s1, char *s2)
{
int value;
int i;

i = 0;
while (s1[i] == s2[i] && s1[i] != '\0')
	i++;
value = s1[i] - s2[i];
return (value);
}
