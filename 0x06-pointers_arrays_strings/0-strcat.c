#include "main.h"

/**
  * *_strcat - Func that concatinates two strings
  * @dest: Describes the destination string
  * @src: Describes the source string
  * Return: concatinated Destination string
  */

char *_strcat(char *dest, char *src)
{
int src_len = 0, dest_len = 0;

int i = 0;
while (src[i] != '\0')
{
src_len++;
i++;
}

int j = 0;
while (dest[j] != '\0')
{
dest_len++;
j++;
}

int k;
for (k = 0; src[k] != '\0'; dest_len++, k++)
{
dest[dest_len] = src[k];
}
dest[dest_len] = '\0';
}

return (dest);
}
