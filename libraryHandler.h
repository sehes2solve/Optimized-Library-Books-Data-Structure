#pragma once
#include <iostream>
#include <string>
#include <map>
#include <utility>
#include <algorithm>
using namespace std;

#include "library.h"

bool cmp(const pair<int, library>&lib1,const pair<int, library>&lib2)
{
	return (lib1.first) < (lib2.first);
}


class libraryHandler
{
private:
	map<string, library> lib;
	map<int, library> avil;
	map<string, library> search_author;
public:
	libraryHandler() {}

	void AddBook()
	{
		cout << "Please Enter the Book Info" << endl;
		library li;
		cin >> li;
		lib[li.getNAME()] = li;
		avil[li.getAvil()] = li;
		search_author[li.getAuthor()] = li;

	}


	void ListBooks()
	{
		for (map<string, library>::iterator it = lib.begin(); it != lib.end(); it++)
		{
			cout << it->first << endl;
		}
	}

	void UpdataBookVersions()
	{
		cout << "Enter the book Name :  ";
		string key;
		cin >> key;
		if (lib.find(key) != lib.end())
		{
			cout << "Enter the new number of versions" << endl;
			int new_num;
			cin >> new_num;
			lib[key].setAvil(new_num);
		}
		else
			cout << "The Book not in the library" << endl;
	}

	void SearchName()
	{
		cout << "Enter the book name : ";
		string key;
		cin >> key;
		if (lib.find(key) != lib.end())
		{
			cout << lib[key] << endl;
		}
	}
	void SearchAuthor()
	{
		cout << "Enter the Author name : ";
		string key;
		cin >> key;
		if (search_author.find(key) != search_author.end())
		{
			cout << search_author[key] << endl;
		}

	}


	string FindHighestNumVersions()
	{


		auto x = max_element(avil.begin(), avil.end(),
			[](const pair<int, library>&a1, const pair<int, library>&a2)
			{return a1.first < a2.first; } );

		cout << x->second << endl;

	}

};
