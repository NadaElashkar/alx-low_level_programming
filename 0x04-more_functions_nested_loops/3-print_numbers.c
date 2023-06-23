#include "main.h"
/**
 *print_numbers - main function
 *		only using _putchar twice
 *
 *Return: 0 for success
 */
void print_numbers(void)
{
int i = 0;

do {
_putchar (i + 48);
i++;
} while (i <= 9);
_putchar ('\n');
return (0);
}


