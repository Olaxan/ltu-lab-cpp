#include "utilslib.h"

#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

namespace efiilj {

	vector<string> GenUtils::split(string &input) {

		return split(input, " \t\n\v\f\r");

	}

	vector<string> GenUtils::split(string &input, string splitter) {

		int index;
		vector<string> split;

		while (true) {

			index = input.find_first_of(splitter);
			if (index != string::npos) {
				string sub = input.substr(0, index);

				if (!isspace(sub[0]))
					split.push_back(sub);

				input.erase(0, index + 1);
			}
			else {
				split.push_back(input);
				break;
			}
		}

		return split;
	}

}