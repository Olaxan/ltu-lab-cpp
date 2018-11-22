#pragma once

#include <vector>
#include <string>
#include <map>

namespace efiilj {

	class Dict {
	public:

		virtual bool findWord(std::string word) = 0;
		virtual bool findWord(std::string word, std::string &definition) = 0;
		virtual bool addWord(std::string word, std::string definition) = 0;
		virtual void list() = 0;

		virtual ~Dict() = 0 { };
	};

	class DictMap : public Dict
	{
	public:
		DictMap();

		bool findWord(std::string word);
		bool findWord(std::string word, std::string &definition);
		bool addWord(std::string word, std::string definition);
		void list();

		~DictMap();

	private:
		std::map<std::string, std::string> store;
	};

	class DictVector : public Dict {
	public:
		DictVector();

		bool findWord(std::string word);
		bool findWord(std::string word, int &index);
		bool findWord(std::string word, std::string &definition);
		bool addWord(std::string word, std::string definition);
		void list();

		~DictVector();

	private:
		std::vector<std::string> words;
		std::vector<std::string> definitions;
	};

}


