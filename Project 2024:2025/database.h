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
	
	Person* findPersonById(int id);

private:
	unsigned int countPeople;
	std::map<unsigned int, std::unique_ptr<Person>> peopleMap;
};

class Book
{
	std::vector<Book>createBooks()
	{
		std::vector<Book> books;

	//creat books
	
	books.push_back(Book("


#endif
