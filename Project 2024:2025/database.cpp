#include <iostream>
#include <memory>
#include <string>
#include <map>
#include "person.h"
#include "database.h"
#include "library.h"


DataBase::DataBase()
{
	countPeople = 0;
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

std::vector<Book> createBooks()
{
	std::vector<Book> books;
	
	books.push_back(Book(Person(Donald Knuth), "Art Of Computer Programming.", 1968));

	return books;



}

//display

void displayBooks(const std::vector<Book>& books)
{
	for (const auto& book : books)
	{
		std::cout << "Book name: "		  << book.name()   << std::endl;
		std::cout << "Book author: " 		<< book.author() << std::endl;
		std::cout << "Year released: "  << book.year()   << std::endl;
		std::cout << "---------------"                   << std::endl;
	}
}




