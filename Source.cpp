#include <iostream>
#include "libraryHandler.h"
using namespace std;

int main()
{
	libraryHandler lib;
	bool c = true;
	while (c) {
		cout << "1- Add Book\n"
			<< "2- Search Book by name\n"
			<< "3- Search Book bu Author\n"
			<< "4- List Books in alphabetical order\n"
			<< "5- Update Book Versions number\n"
			<< "6- Find the highest Number of versions of a book\n"
			<< "7- Exit\n"
			<< "Please enter your choice:   "
			<< flush;

		char ch;
		cin >> ch;
		switch (ch) {
		case '1': {
			lib.AddBook();
			break;
		}
		case '2': {
			lib.SearchName();
			break;
		}
		case'3': {
			lib.SearchAuthor();
		}
		case '4': {
			lib.ListBooks();
			break;
		}
		case '5': {
			lib.UpdataBookVersions();
			break;
		}
		case '6': {
			lib.FindHighestNumVersions();
			break;
		}
		case '7':{
					  c = false;
					  break;
				  }
		}
		cout << endl;
	}
	return 0;
}