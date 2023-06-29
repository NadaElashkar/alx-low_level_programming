#include "main.h"

/**
 *_strcmp - main
 *@s1: s1
 *@s2: s2
 *Return: value
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
