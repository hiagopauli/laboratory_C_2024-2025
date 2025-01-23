#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <string>
#include <map>
#include <vector>
#include "person.h"
#include "book.h"

class DataBase
{
public:
	DataBase();
	~DataBase() = default;
		
	Person* addPerson(const std::string& name, const std::string& surename, unsigned int age);
	std::vector<Person*> getAllPeople() const;
	std::vector<Book*> getAllBooks();	
	Person* findPersonById(int id);
	
private:
	void initAuthors();
	Person* findAuthorById(int id);
	void initBooks();

	unsigned int countPeople;
	std::map<unsigned int, std::unique_ptr<Person>> peopleMap;
  std::map<unsigned int, std::unique_ptr<Person>> authorsMap;
  std::map<unsigned int, std::unique_ptr<Book>> booksMap;
};

#endif
