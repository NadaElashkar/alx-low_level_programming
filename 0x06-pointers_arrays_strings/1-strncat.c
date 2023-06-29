#include "main.h"
/**
 **_strncat - main
 *@dest: dest
 *@src: src
 *@n: n
 *Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	desr[i] = src[j];
	i++
	j++
	}
	dest[i] = '\0';
	return (dest);

}
