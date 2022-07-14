#include "main.h"
/**
 * *cap_string - capitalizes every first letter of a word in a string
 * @n: pointer to string
 * Return: pointer to s.
 */
char *cap_string(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[0] >= 97 && n[0] <= 122)
		{
			n[0] = n[0] - 32;
		}
		if (n[i] == ' ' || n[i] == '\t' || n[i] == '\n'
				|| n[i] == ',' || n[i] == ';' || n[i] == '.'
				|| n[i] == '.' || n[i] == '!' || n[i] == '?'
				|| n[i] == '"' || n[i] == '(' || n[i] == ')'
				|| n[i] == '{' || n[i] == '}')
		{
			if (n[i + 1] >= 97 && n[i + 1] <= 122)
			{
				n[i + 1] = n[i + 1] - 32;
			}
		}
		i++;
	}
	return (n);
}
