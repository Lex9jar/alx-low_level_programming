#include "main.h"

/**
 * _isalpha - checks for lowercase character
 * @c: character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}