#include "main.h"
/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length or string
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0, *s != '\0'; s++)
		++scounter;

	return (counter);
}

