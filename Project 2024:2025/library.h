#include <iostream>
#include <string>
#include <map>
#include <memory>
#include "Book.h"

class Library
{
	public:
		~Library()
	{	

	}	
	
	void loadFromFile (const std::string& filename);
	void saveToFile (const std::string& filename);

	void addBook (const Book& book)
	
	
	Book* findByAuthor(const std::person& Author);
	Book* findByName(const std::string& name);

	private:
		Bookmap _books_by_name;
		Bookmap _books_by_author;
};

 
