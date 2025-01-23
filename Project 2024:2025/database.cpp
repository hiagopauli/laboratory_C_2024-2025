#include <iostream>
#include <memory>
#include <string>
#include <map>
#include "person.h"
#include "database.h"

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


