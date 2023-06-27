#include "main.h"
/**
 *print_rev - print reverse
 *@s: variable
 *Return: 0
 */

void print_rev(char *s)
{
int start = 0;
while (s[start])
	start++;
while (start--)
	_putchar (s[start]);
_putchar ('\n');
}
