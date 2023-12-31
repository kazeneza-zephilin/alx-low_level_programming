/**
 * is_palindrome - Checks if a string is a palindrome.
 *
 * @s: input string
 *
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int length = 0;
	int i;

	/* Calculate the length of the string */
	while (s[length] != '\0')
	{
		length++;
	}

	/* Check for palindrome */
	for (i = 0; i < length / 2; i++)
	{
		if (s[i] != s[length - i - 1])
		{
			return (0); /* Not a palindrome */
		}
	}

	return (1); /* Palindrome */
}
