#include "main.h"
/**
 * _isalpha - checks for alphaabetic character
 * c: the character to be checked
 *
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(inr c)
{
	return ((c > 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}