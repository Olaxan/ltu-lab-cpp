#include "utilslib.h"

#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

namespace efiilj {

	vector<string> GenUtils::split(string &input) {

		vector<string> split;

		return split;
	}

	vector<string> GenUtils::split(char splitter, string &input) {

		int index;
		vector<string> split;

		while (true) {

			index = input.find_first_of(splitter);
			if (index != string::npos) {
				split.push_back(input.substr(0, index));
				input.erase(0, index);
			}

			return split;
		
		}

	}

}