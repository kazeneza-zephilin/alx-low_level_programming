#include <stdio.h>
#include <string.h>

/**
 * _puts_recursion - Prints a string followed by a new line using recursion.
 *
 *@s: string to be printed
 *
 * Return: always 0 sucess
*/
void _puts_recursion(char *s)
{

if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
_puts_recursion(s + 1);
}
