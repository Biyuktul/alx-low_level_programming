#include "main.h"

/**
 * _strspn - calculates the length of the initial substring og
 * the first string made up of entirely characters found
 * in the second string
 * @s: string to be scanned
 * @accept: list of characters to match s
 * Return: length of initial segment of s w/c consist of only
 * characters from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int initial_length = 0;
	unsigned int found_match;

	for (unsigned int i = 0; s[i] != '\0'; i++)
	{
		found_match = 0;

		for (unsigned int j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found_match = 1;
				break;
			}
		}
		if (found_match)
			initial_length++;
		else
			break;
	}

	return (initial_length);
}
