#include "List.h"
#include "Empty.h"
#ifndef showstructure_H
#define  showstructure_H

void List::showStructure(){

	if (!isEmpty())
	{
		for (int i = 0; i < length; i++)
		{
			cout << "Element:" << elements[i] << endl;
		}
	}
	else
	{
		cout << "Display: No items to be displayed. List is empty\n";
	}
}
#endif