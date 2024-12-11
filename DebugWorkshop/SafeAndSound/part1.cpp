#include "part1.h"
#include <iostream>

char* string_copy(char* dest, unsigned int destsize, char* src)
{
	char* ret = dest;
	while (*ret++ = *src++)
		;
	return ret;
}

void part1()
{
	char password[] = "secret";
	char src[] = "hello world!";
	char dest[sizeof(src)];

	string_copy(dest,sizeof(dest), src);

	std::cout << src << std::endl;
	std::cout << dest << std::endl;
}
