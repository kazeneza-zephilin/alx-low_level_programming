#include <stdio.h>
/**
 * _strlen_recursion - returns a length of a string using recursin.
 *
 * @s: Pointer to a string
 *
 *Return: return integer
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
	return (0);
}
return (1 + _strlen_recursion(s + 1));
}
