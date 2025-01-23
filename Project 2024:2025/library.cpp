#include "library.h"
#include <iostream>



const Book* Library::findByAuthor(const Person& author) const 
{
	auto result = _books_by_author.find(author.name());
	if (result != _books_by_author.end())
	{
		return result->second.get();
	}

	return nullptr;
}

const Book* Library::findByName(const std::string& name) const
{
	auto result = _books_by_name.find(name);
	if (result != _books_by_name.end())
	{
		return result->second.get();
	}
	return nullptr;
}




