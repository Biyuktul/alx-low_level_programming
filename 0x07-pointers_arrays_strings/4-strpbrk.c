#include "main.h"

/**
 * _strpbrk - ocates the first occurrence in the string s of any of
 * the bytes in the string accept
 * @s: pointer to the string to be scanned.
 * @accept: pointer to the string containing the characters to match
 * Return: pointer to the character in s that
 * matches one of the characters in accept, else returns NULL.
 */

ar *_strpbrk(char *s, char *accept)
{
int a = 0, b;

while (s[a])
{
b = 0;

while (accept[b])
{
if (s[a] == accept[b])
{
s += a;
return (s);
}
b++;
}

a++;
}
return ('\0');
}
