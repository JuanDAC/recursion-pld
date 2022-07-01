
#include "main.h"
int _search_index(const char const *string, const char character, int first)
{
		int index_character = 0;

		if (string == NULL || *string == '\0')
				return (-1);

		if (!first && *string == character)
				return ((long int)string);

		if (first && *string == character)
				return (0);

		index_character = _search_index(string + 1, character, 0);
		if (first && index_character != -1) 
				return (index_character - (long int)string);

		return (index_character);
}




int search(const char const *string, const char character)
{
		return search_index(string, character) != -1;
}


