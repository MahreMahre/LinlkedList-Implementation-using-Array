#include "List.h"
#include "Empty.h"
#include "showstructure.h"


bool List ::find(int searchDataItem)
{
	//Condition: List is not empty.
	//Result: Check if the number is present in the list or not

	if (!isEmpty())
	{
		for (int i = 0; i < length; i++)
		{
			if (elements[i] == searchDataItem) {
				return true;
			}
		}
		return false;
	}

}
