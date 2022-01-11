#include "List.h"
#include "isFull.h"
#include "showstructure.h"

void List::insert(int newDataItem) {

	if (!isFull())
	{
		elements[length] = newDataItem;
		length++;
	}
	else
	{
		cout << "Insert: Cannot insert more items. List is full\n";
	}
}