#include "main.h"
/**
 *_strlen -  main function
 *@s: s
 * Return: 0
 */

int _strlen(char *s)
{
int string_length = 0;

while (s[string_length])
	string_length++;
return (string_length);
}
