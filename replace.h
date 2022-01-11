#include "List.h" 
#include "showstructure.h"

void List ::replace(int newDataItem, int position)
{
	//Condition: List contains at least position+1 data items.
	//Result: Removes the data item present at the position from a list and replace the number requested by user at its position.
	if (length < position)
	{
		cout << "Replace: Cannot replace the item. Invalid position requested\n";
	}
	else
	{
		elements[position] = newDataItem;
	}
}