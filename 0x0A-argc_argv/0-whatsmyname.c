#include "main.h"
#include <stdio.h>
/**
 * main - Print the name of program.
 *@argc: number of arguments.
 *@argv: array of arguments
 *
 * Return: always 0 for sucess.
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("the name of program is %s\n", *argv);
	return (0);

}
