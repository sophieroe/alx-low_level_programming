#include "main.h"

int check_palindrome(char *s);

/**
  * is_palindrome - Returns if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int is_palindrome(char *s)
{
	if (*s == '0')
		return (1);

	return (check_palindrome(s));
}

/**
  * check_palindrome - Check if a string is palindrome
  * @s: the string value to be checked
  *
  * Return: integer value
  */
int check_palindrome(char *s)
{
	int l = _strlen_recursion(s) - 1;

	if (*s == s[l])
	{
		s++;
		l--;
	}
	else
	{
		return (0);
	}
return (1);
}

/**
  * _strlen_recursion - Get the length of a string
  * @s: the string to get the length
  *
  * Return: the string length
  */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	s++;
	return (_strlen_recursion(s) + 1);
}
int _strlen_recursion(char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
* palidrone - function
*
* @s: chaine of the char
* @taille: the number
* @i: the number
* Return: Always 0.
*/
int palidrone(char *s, int taille, int i)
{
	if (s[i] != '\0')
	{
		if (s[i] != s[taille - i])
			return (0);
		else
			return (palidrone(s, taille, i + 1));
	}
	else
		return (1);
}

/**
* is_palindrome - function
*
* @s: the chaine of char
* Return: Always 0.
*/

int is_palindrome(char *s)
{
	if (s[0] == '\0')
		return (1);
	return (palidrone(s, _strlen_recursion(s) - 1, 0));
}
