#include "main.h"
#include <string.h>
/**
 * _strncpy - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
