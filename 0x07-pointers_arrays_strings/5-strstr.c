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
if (*needle == '\0')
{
return (haystack);
}

for (i = 0; i < haystack[i] != '\0'; i++)
{
if (*(haystack + i) == *needle)
{
char *ptr = _strstr(haystack + i + 1, needle + 1);
if (ptr)
{
return (ptr - 1);
}
return (NULL);
}
}
return (NULL);
}
