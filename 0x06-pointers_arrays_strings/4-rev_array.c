#include "main.h"
/**
 *reverse_array - main
 *@a: a
 *@n: n
 *Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
