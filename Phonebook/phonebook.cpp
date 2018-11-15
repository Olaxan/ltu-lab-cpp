#include "..\UtilsLib\utilslib.h"

#include <iostream>
#include <vector>

using namespace std;

int main() {

	string input;
	vector<string> items;

	while (getline(cin, input)) {

		items = efiilj::GenUtils::split(input);

		cout << "Size: " << items.size() << endl;

		for (int i = 0; i < items.size(); i++) {
			cout << items[i] << endl;
		}

	}

}