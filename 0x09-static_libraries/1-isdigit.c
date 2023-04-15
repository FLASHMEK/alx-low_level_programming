#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * _isdigit - checks for a number
 * @c: int to be checked
 *
 * Return: 1 if c is a number
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
