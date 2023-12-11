#include "main.h"
/**
  * _isalpha - shows lowercase
  *@c: The character to be checked
  * Return: (0) success
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
