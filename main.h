#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>

int sum(int number);
int search(const char *string, const char character);
int _search_index(const char const *string, const char character, int first);
void print_reverse(char *string);

#define search_index(STRING, CHARACTER) _search_index(STRING, CHARACTER, 1)

#endif /* _MAIN_H */
