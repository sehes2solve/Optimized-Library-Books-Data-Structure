#pragma once
#include <iostream>
#include <string>
using namespace std;

class library
{
private:
	string name;
	string author;
	short year;
	int avil_version;
public:
	library(){}
	library(string NAME , string AUTHOR , short YEAR , int AVIL)
		:name(NAME) , author(AUTHOR) , year(YEAR) , avil_version(AVIL){}


	void setName(string NAME)
	{
		name = NAME;
	  }


	string getNAME()
	{
		return name;
	}


	void setAuthor(string AUTHOR)
	{
		author = AUTHOR;
	}

	string  getAuthor ()
	{
		return author;
	}

	void setYear(short YEAR)
	{
		year = YEAR;
	}

	short getYear() { return year; }

	void setAvil(int AVIL)
	{
		avil_version = AVIL;
	}

	int getAvil() { return avil_version; }

	friend istream& operator >> (istream &in, library&lib)
	{
		cout << "Enter The book name \n";
		in >> lib.name;
		cout << "Enter the book Author \n";
		in >> lib.author;
		cout << "Enter The publish year of the book \n";
		in >> lib.year;
		cout << "Enter the number of available versions of the book \n";
		in >> lib.avil_version;
		return in;
	}

	friend ostream& operator << (ostream &out, library &lib)
	{
		cout << "The Book name :  ";
		out << lib.name;
		cout << endl;
		cout << "The Book Author :  ";
		out << lib.author;
		cout << endl;
		cout << "The Book publish year :  ";
		out << lib.year;
		cout << endl;
		cout << "The the number of available versions of the book :  ";
		out << lib.avil_version;
		cout << endl;
		return out;
	}


	
};