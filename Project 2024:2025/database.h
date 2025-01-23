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
  bool findRentBook(unsigned int bookId) const;
  void addRent(unsigned int personId, unsigned int bookId);
  void removeRent(unsigned int bookId);

	
private:
	void initAuthors();
	Person* findAuthorById(int id);
	void initBooks();

	unsigned int countPeople;
	std::map<unsigned int, std::unique_ptr<Person>> peopleMap;
  std::map<unsigned int, std::unique_ptr<Person>> authorsMap;
  std::map<unsigned int, std::unique_ptr<Book>> booksMap;
  std::vector<std::pair<unsigned int, unsigned int>> rents;
};

#endif
