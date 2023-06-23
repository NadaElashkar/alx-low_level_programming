#include "main.h"
/**
 *print_numbers - main function
 *		only using _putchar twice
 *
 *Return: 0 for success
 */
void print_numbers(void)
{
int c = 0;

do {
_putchar (c + 48);
i++;
} while (c <= 9);
_putchar ('\n');
return (0);
}


