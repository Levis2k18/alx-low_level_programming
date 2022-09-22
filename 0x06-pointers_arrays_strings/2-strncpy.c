#include "main.h"
#include <string.h>
/**
 * _strncat - appends src to the dest string
 * @dest: string to append by src
 * @src: string to append to dest
 * @n: largest number of bytes to append
 * Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
