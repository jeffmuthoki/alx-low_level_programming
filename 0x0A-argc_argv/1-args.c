#include <stdio.h>
#include "main.h"

/**
 * main - Entry Point
 * @argc: arguments
 * @argv: array pointing to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	
	printf("%d\n", argc - 1);
	
	return (0);
}
