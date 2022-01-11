#include "List.h"
#include "showstructure.h"
#include "replace.h"
#include "remove.h"
#include "isFull.h"
#include "insert.h"
#include "Find.h"
#include "Empty.h"


int main() {
	int size, val, rem, ind, elem, findEle;
	cout << "Enter Size of array : ";
	cin >> size;
	List obj(size);
	cout << endl << "Enter The Values " << endl;
	for (int i = 0; i < size; i++) {
		cin >> val;
		obj.insert(val);
	}
	cout << endl << "Given Array is" << endl;
	obj.showStructure();
	cout << "Which   elements  You want remove: ";
	cin >> rem;
	for (int i = 0; i < rem; i++){
		cout << "removing.......sucess: " << obj.remove();
	}
	cout << endl << "Given Array is " << endl;
	obj.showStructure();
	cout << "Enter  index you want to replace: ";
	cin >> ind;
	cout << "then Enter  Your New Element: ";
	cin >> elem;
	cout << endl << "Given  Array  " << endl;

	obj.replace(elem, ind);
	obj.showStructure();
	cout << "Enter the Element You want to find : ";
	cin >> findEle;
	if (obj.find(findEle))
		cout << endl << "Element is present";
	else
		cout << endl << "Element is present";
	return 0;
}