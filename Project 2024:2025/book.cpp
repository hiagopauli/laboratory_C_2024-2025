#include "book.h"

Book::Book(const Person& author, const std::string& name, int year):
	_author(author),
	_name(name),
	_year(year)
{

}
		
const Person& Book::author() const 
{ 
	return _author; 
}

const std::string& Book::name() const 
{ 
	return _name; 
}

const int Book::year() const 
{ 
	return _year; 
}

std::ostream& operator<<(std::ostream& os, const Book& book) 
{
    os << "Name:   " << book._name << "\n"
       << "Author: " << book._author.name() << "\n"
       << "Year:   " << book._year;

    return os;
}


