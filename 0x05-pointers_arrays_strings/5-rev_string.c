#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: input to reverse
 * Return: void
 */

void rev_string(char *s)
{
	char rev = s[0];
	int fcnt = 0;
	int i;

	while (s[cnt] != '\0')
		cnt++;

	for (i = 0; i < cnt; i++)
	{
		cnt--;
		rev = s[i];
		s[i] = s[cnt];
		s[cnt] = rev;
	}
}
