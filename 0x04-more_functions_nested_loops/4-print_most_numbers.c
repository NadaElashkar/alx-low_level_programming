#include "main.h"
/**
 *print_most_numbers - main
 *Return: 0
 */

void print_most_numbers(void)
{
int i = 0;

for (i = 0; i <= 9; i++)
{
if (i == 2 || i == 4)
continue;
_putchar (i + 48);
}
_putchar ('\n');
}
