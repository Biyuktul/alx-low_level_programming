#include "main.h"

/**
 * _strstr -  find the substring in other string
 * @haystack: base string in which we want to search sub-string
 * @needle: sub-string that need to be searched in haystack
 * Return: If it founds substring in the haystack string,
 * it returns 1. Otherwise, it returns 0
 *
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *str1 = haystack;
		char *str2 = needle;

		while (*str1 == *str2 && *str2 != '\0')
		{
			str1++;
			str2++;
		}

		if (*str2 == '\0')
			return (haystack);
	}

	return (0);
}
