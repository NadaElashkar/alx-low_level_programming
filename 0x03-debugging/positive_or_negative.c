#include "main.h"
/**
*main - tests function that prints if integer is positive or negative
*Return: 0
*/

void positive_or_negative(int i)
{
	if (i > 0)
		printf ("%d is postitive\n", i);
	else if (i < 0)
		printf ("%d is negative\n", i);
	else
		printf ("%d is zero\n", i);
}
