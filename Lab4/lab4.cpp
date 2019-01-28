#include "..\SortedArray\sarray.h"
#include "..\UtilsLib\menu.h"

#include <iostream>

auto arr = efiilj::SortedArray<int>();

bool doAdd()
{
	int user;
	efiilj::IOUtils::Input<int>(user, "Add item: ");
	arr.insert(user);
	std::cout << "Array size is now " << arr.count() << ".\n" << arr.to_string() << "\n";

	return false;
}

bool doRemove()
{
	int user;
	efiilj::IOUtils::Input<int>(user, "Remove item(s): ");
	arr.remove(user);
	std::cout << "Array size is now " << arr.count() << ".\n" << arr.to_string() << "\n";

	return false;
}

bool doFind()
{
	int user, index;
	efiilj::IOUtils::Input<int>(user, "Find item: ");
	index = arr.find(user);
	std::cout << "Element index: " << index << ".\n" << arr.to_string() << "\n";

	return false;
}

int main()
{

	auto main = efiilj::Menu("Main operations menu");
	main.addItem("Add item to sorted array", doAdd);
	main.addItem("Remove an item from sorted array", doRemove);
	main.addItem("Find item in sorted array", doFind);
	main.show();

}