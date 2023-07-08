#include <stdio.h>

/**
 *_print_rev_recursion - Prints a string in reverse.
 *@s:Pointer to a string to be printed
 *Return: always 0 for sucess
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
_print_rev_recursion(s + 1);
putchar(*s);
}
