#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name -entery
 *
 * @name: name
 * @f: pointer to a func
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return ();

	f(name);
}
