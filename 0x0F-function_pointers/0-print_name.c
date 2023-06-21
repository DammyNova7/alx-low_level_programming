#include "function_pointers.h"
#include <stdlib.h>


/**
 * print_name - Prints a name using a function pointer
 *
 * @name: The name to be printed
 * @f: The function pointer to the printing function
 *
 * Return: nothing.
 */


void print_name(char *name, void (*f)(char *))
{
	if ((name != NULL) && (*name != '\0') && (f != NULL))
	f(name);
}
