#ifndef BOOK_H
#define BOOK_H

#include <iostream>
#include <string>
#include <fstream>
#include "person.h"

class Book
{ 
public: 
	Book(const Person& author, const std::string& name, int year);
	
	const Person& author() const;
	const std::string& name() const;
	int year() const;

 	// friend function 
	friend std::ostream& operator<<(std::ostream& os, const Book& book);
	
	
private:

	Person _author;
	std::string _name;
	int _year;
};
	

#endif

