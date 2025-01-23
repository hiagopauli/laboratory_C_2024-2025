#include <iostream>
#include <memory>
#include <string>
#include <map>
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
	if (it != peopleMap.end()) {
		return it->second.get();
	}

	return nullptr;

}

void DataBase::initAuthors()
{
	authorsMap.emplace(1, std::make_unique<Person>("Donald", "Knuth", 87, 1));
	authorsMap.emplace(2, std::make_unique<Person>("xxx", "xxx", 87, 1));
	authorsMap.emplace(3, std::make_unique<Person>("yyy", "yyy", 87, 1));
	authorsMap.emplace(4, std::make_unique<Person>("zzzz", "zzzz", 87, 1));
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
	std::unique_ptr<Book> book1 = std::make_unique<Book>(
		*author1, "Algorithms", 1987
	);
	booksMap.emplace(1, std::move(book1));
}

std::vector<Book*> DataBase::getAllBooks()
{
	std::vector<Book*> books;

	for (std::map<unsigned int, std::unique_ptr<Book>>::iterator it = booksMap.begin(); it != booksMap.end(); ++it) {
     books.push_back(it->second.get());
	}

	return books;
}


