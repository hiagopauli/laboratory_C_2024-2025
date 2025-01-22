#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include <memory>
#include <map>
#include "book.h"
#include "person.h"


class Library
{
public:
	Library() = default;
	~Library() = default;
	
	//add book on library 
	void addBook(const Book& book);	
	
	//find a book by author
	const Book* findByAuthor(const Person& author) const;

	//find a book by tittle
	const Book* findByName(const std::string& name) const;

	private:
	std::map<std::string, std::shared_ptr<Book>> _books_by_name;
	std::map<std::string, std::shared_ptr<Book>> _books_by_author;
};


#endif
