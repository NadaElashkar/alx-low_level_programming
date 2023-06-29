#include "main.h"

/**
 *swap_int - main function
 *@a: first value
 *@b: second value
 *Return: 0
 */

void swap_int(int *a, int *b)
{
int change;
change = *b;
*b = *a;
*a = change;
}
