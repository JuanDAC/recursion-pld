#include "main.h"


void print_reverse(char *string)
{
		if (string == NULL || *string == '\0')
				return;
		/*** avanzado hasta el final ***/
		print_reverse(string + 1);
		/*** del final al principio ***/
		putchar(*string);
}
