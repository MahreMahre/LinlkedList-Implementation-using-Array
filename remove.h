# include "List.h"
#include "Empty.h"
#include "showstructure.h"

int List::remove(){
	if (!isEmpty())
	{
		length--;
		return elements[length];
	}
	else
	{
		cout << "Remove: Cannot remove the item. List is empty\n";
	}
}