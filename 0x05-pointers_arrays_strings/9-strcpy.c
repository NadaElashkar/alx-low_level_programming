#include "main.h"
/**
 **_strcpy - main
 *@dest: dest
 *@src: src
 *Return: 0
 */

char *_strcpy(char *dest, char *src)
{
int z = -1;
do {
	z++;
	dest[z] = src[z];
} while (src[z] != '\n');

return (dest);
}
