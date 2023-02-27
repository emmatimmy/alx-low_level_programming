#include "main.h"
/**
 * _strlen - returns the length of a string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int longi = 0;

	while (*str != '\0')
	{
		longi++;
		str++;
	}
	return (longi);
}
