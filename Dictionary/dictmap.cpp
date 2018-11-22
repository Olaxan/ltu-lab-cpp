#include "dict.h"

#include <iostream>
#include <string>
#include <map>

using namespace std;

namespace efiilj {

	//Matrix::Matrix(int width, int height) : width(width), height(height)
	DictMap::DictMap() {  };

	bool DictMap::addWord(string word, string definition) {

		word[0] = toupper(word[0]);
		definition[0] = toupper(definition[0]);

		if (definition[definition.length() - 1] != '.')
			definition.append(".");

		if (!findWord(word)) {
			this->store[word] = definition;
			return true;
		}

		return false;
	}

	bool DictMap::findWord(string word) {

		word[0] = toupper(word[0]);

		auto it = this->store.find(word);
		return (it != this->store.end());
	}

	bool DictMap::findWord(string word, string &definition) {

		word[0] = toupper(word[0]);

		if (this->findWord(word)) {
			definition = store[word];
			return true;
		}

		return false;
	}

	void DictMap::list() {
		for (auto it = this->store.begin(); it != this->store.end(); ++it) {
			cout << " - " << it->first << ": " << it->second << endl;
		}
	}

	DictMap::~DictMap() {
	}

}


