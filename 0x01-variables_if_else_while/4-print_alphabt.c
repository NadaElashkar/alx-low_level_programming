#include <stdio.h>

/**main - is my main function
 **Description 'advanced while loop'
 *Return: always zero for success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
{
	if (n == 101 || n == 113)
	{
	n++;
	continue;
	}
	putchar (n);
	n++;
}
putchar ('\n');
return (0);
}
