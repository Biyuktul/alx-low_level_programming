#include "main.h"

/**
 * print_alphabet - a-z
 *
 * main - Entry point
 *
 * Return: Always void.
 */

void print_alphabet(void)
{
int i;

for (i = 97; i < 123; i++)
{
_putchar(i);
}
_putchar('\n');
}

int main(void)
{
print_alphabet();

return (0);
}
