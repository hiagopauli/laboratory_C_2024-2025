#include "library.h"

Library::~library()
	{}

void Library::loadFromFile(const std::string& filename)
{

}

void Library::loadsaveToFile(const std::string& filename)
{

}

void Library::addBook(const Book& book)
{
	auto book = std::make_shared<Book>(book);
	_books_by_name.emplace(book->name(),book);
	_books_by_author.emplace(book->author(),book);
}

Book& Library::findByAuthor(const std::person& author) const 
{
	auto result = _books_by_author.find(author);
	if (result != _books_by_authoor.end())
	{
		return result->second;
	}

	return nullptr;
};

