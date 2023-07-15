#include "main.h"`
#include <stdio.h>
/**
 * main- Print the numeber of passed arguments.
 *@argc: number of arguments
 *@argv: array of passed arguments
 *
 * Return: always 0 for success
 */
int main(int argc,char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
