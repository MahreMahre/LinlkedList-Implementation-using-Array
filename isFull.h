#include "List.h"
#include "showstructure.h"

bool List ::isFull()
{
	if (length < size)
		return false;
	else
		return true;
}