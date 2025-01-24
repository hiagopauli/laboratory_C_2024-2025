#include <iostream>
#include <memory>
#include <string>
#include <map>
#include <vector>
#include "person.h"
#include "database.h"
#include "library.h"
#include "book.h"

DataBase::DataBase()
{
	countPeople = 0;
	initAuthors();
	initBooks();
}

Person* DataBase::addPerson(const std::string& name, const std::string& surname, unsigned int age)
{
	countPeople++;
	std::unique_ptr<Person> person_ptr = std::make_unique<Person>(name, surname, age, countPeople);

	peopleMap.emplace(countPeople, std::move(person_ptr));

	return findPersonById(countPeople);
}

std::vector<Person*> DataBase::getAllPeople() const
{
	std::vector<Person*> allPersons;
	for (const auto& pair: peopleMap)
	{
			allPersons.push_back(pair.second.get());
	}
	return allPersons;
}

	
Person* DataBase::findPersonById(int id)
{
	std::map<unsigned int, std::unique_ptr<Person>>::iterator it = peopleMap.find(id);
	if (it != peopleMap.end()) 
	{
		return it->second.get();
	}
	
	
	return nullptr;
	
}

std::vector<Person*> DataBase::findPersonByName(const std::string& name)
{
	std::vector<Person*> result;
	for (const auto& pair : peopleMap)
	{
		if (pair.second->name() == name)
		{
			result.push_back(pair.second.get());
		}
	}
	return result;
}


void DataBase::initAuthors()
{
	authorsMap.emplace(1, std::make_unique<Person>("Donald Knuth", "Knuth", 87, 1));
	authorsMap.emplace(2, std::make_unique<Person>("Denis Ritchie", " Ritchie", 70, 2));
	authorsMap.emplace(3, std::make_unique<Person>("James Gosling", " Gosling", 69, 3));
	authorsMap.emplace(4, std::make_unique<Person>("Torvalds Linus", "Linus", 55, 4));
}

Person* DataBase::findAuthorById(int id)
{
	std::map<unsigned int, std::unique_ptr<Person>>::iterator it = authorsMap.find(id);
	if (it != authorsMap.end()) {
		return it->second.get();
	}

	return nullptr;

}

void DataBase::initBooks()
{
	Person* author1 = findAuthorById(1);
	std::unique_ptr<Book> book1 = std::make_unique<Book>
	(*author1, "The Art of Computer Programming.", 1968);
	booksMap.emplace(1, std::move(book1));
	

	Person* author2 = findAuthorById(2);
	std::unique_ptr<Book> book2 = std::make_unique<Book>
	(*author2, "C Programming Language.", 1988);
	booksMap.emplace(2, std::move(book2));

	Person* author3 = findAuthorById(3);
	std::unique_ptr<Book> book3 = std::make_unique<Book>
	(*author3, "Java language specification.", 2013);
	booksMap.emplace(3, std::move(book3));

	Person* author4 = findAuthorById(4);
	std::unique_ptr<Book> book4 = std::make_unique<Book>
	(*author4, "Just for Fun.", 2011);
	booksMap.emplace(4, std::move(book4));

}



std::vector<Book*> DataBase::getAllBooks()
{
	std::vector<Book*> books;

	for (std::map<unsigned int, std::unique_ptr<Book>>::iterator it = booksMap.begin(); it != booksMap.end(); ++it) {
     books.push_back(it->second.get());
	}

	return books;
}

void DataBase::addRent(unsigned int personId, unsigned int bookId)
{
  std::pair<unsigned int, unsigned int> pair(personId, bookId);
  rents.push_back(pair);
}
  
bool DataBase::findRentBook(unsigned int bookId) const
{
  for (std::pair<unsigned int, unsigned int> pair : rents) {
    if (pair.second == bookId) {
      return true;
    }
  }

  return false;
}

void DataBase::removeRent(unsigned int bookId)
{
  std::vector<std::pair<unsigned int, unsigned int>>::iterator it;
  bool found = false;

  for (it = rents.begin(); it != rents.end(); ++it) {
    if (it->second == bookId) {
      found = true;
      break;
    }
  }

  if (found) {
    rents.erase(it);
  }
}


