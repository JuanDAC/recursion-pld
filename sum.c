#include "main.h"



const int sum(const int number)
{
		if (number < 0)
				return (0);
		return (number + sum(number - 1));
}
