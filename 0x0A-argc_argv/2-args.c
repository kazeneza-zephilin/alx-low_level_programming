#include "main.h"
#include <stdio.h>
/*
 *main - print the all arguments passed
 *@argc: number of arguments passed
 *@argv: array of arguments passed
 *
 * Return: always 0 (sucess)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc)
	{	printf("%d\n", argv[i]);
		i++;
	}
	return (0);
}

