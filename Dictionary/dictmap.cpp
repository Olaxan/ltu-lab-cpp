#include "dict.h"

#include <iostream>
#include <fstream>
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

	bool DictMap::save(string path) {
		ofstream file;
		file.open(path);
		if (file.is_open()) {
			for (auto it = this->store.begin(); it != this->store.end(); ++it) {
				file << it->first << "#" << it->second << endl;
			}
			file.close();
			return true;
		}

		return false;
		
	}

	bool DictMap::load(string path) {
		int index;
		string line;
		ifstream file(path);
		if (file.is_open()) {
			while (getline(file, line))
			{
				index = line.find_first_of("#");
				if (index != string::npos) {
					this->store[line.substr(0, index)] = line.substr(index + 1, line.size());
				}
			}
			file.close();
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


