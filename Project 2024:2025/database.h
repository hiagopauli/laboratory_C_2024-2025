#ifndef DATA_BASE_H
#define DATA_BASE_H

#include <string>
#include <map>
#include <vector>
#include "person.h"

class DataBase
{
public:
	DataBase();
	~DataBase() = default;
		
	void addPerson(const std::string& name, const std::string& surename, unsigned int age);
	std::vector<Person>& getAllPersons() const;
	
	Person* findPersonById(int id);

private:
	unsigned int countPeople;
	std::map<unsigned int, std::unique_ptr<Person>> peopleMap;
};
#endif
