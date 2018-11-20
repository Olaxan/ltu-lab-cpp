#include "utilslib.h"

#include <stdexcept>
#include <vector>
#include <string>

using namespace std;

namespace efiilj {


	vector<string> GenUtils::split(string input, string splitter) {

		int index;
		vector<string> split;

		while (true) {

			index = input.find_first_of(splitter);

			if (index != string::npos) {
				string sub = input.substr(0, index);

				if (splitter.find_first_of(sub[0]) == string::npos && sub.size() > 0)
					split.push_back(sub);

				input.erase(0, index + 1);
			}
			else {
				if (splitter.find_first_of(input[0]) == string::npos && input.size() > 0)
					split.push_back(input);
					
				break;
			}
		}

		return split;
	}

}