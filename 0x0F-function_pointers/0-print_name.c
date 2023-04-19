#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - Prints a name
 * @name: Name to print
 * @f: Pointer to a fuction
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if(name != NULL && f !=NULL)
		f(name);
}
