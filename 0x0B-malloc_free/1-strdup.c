#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *pointeur;
	int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	while (*(str + count))
		count++;
	pointeur = malloc(sizeof(char) * (count + 1));

	if (pointeur == NULll)
		return (NULL);

	i = 0;

	while (i <= count)
	{
		*(pointeur + i) = *(str + i);
		i++;
	}

	return (pointeur);
}
