#include "main.h"

/**
 * is_palindrome - check if a string is a palindrome
 * @s: char string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int get_length(char *s);
	int my_pal(char *s, int l);
	int length;

	length = get_length(s) - 1;

	return (my_pal(s, --length));
}

/**
 * get_length - gets length of string
 * @s: string
 * Return: return length of string
 */

int get_length(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (1 + get_length(++s));
}

/**
 * my_pal - recursive check of palindrome
 * @s: string
 * @l: int
 * Return: 1 or 0
 */

int my_pal(char *s, int l)
{
	if (*s == *(s + l))
	{
		if (l <= 0)
			return (1);
		else
			return (my_pal(++s, l - 2));
	}
	else
		return (0);
}
