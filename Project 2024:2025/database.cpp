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

void DataBase::addPerson(const std::string& name, const std::string& surname, unsigned int age)
{
	countPeople++;
	std::unique_ptr<Person> person_ptr = std::make_unique<Person>(name, surname, age, countPeople);

	peopleMap.emplace(countPeople, std::move(person_ptr));
}

std::vector<Person>& DataBase::getAllPersons() const
{
	std::vector<std::unique_ptr<Person>> allPersons;
	for (const auto& pair: peopleMap)
	{
			allPersons.push_back(std::make_unique<Person>(*pair.second));
	}
	return AllPersons;
}

	
Person* DataBase::findPersonById(int id)
{
	std::map<unsigned int, std::unique_ptr<Person>>::iterator it = peopleMap.find(id);
	if (it != peopleMap.end()) {
		return it->second.get();
	}

	return nullptr;
}


/*
void searchUser(const std::map<int, std::unique_ptr<Person>>& librarySystem)
{
	//menu
	std::cout << "--------------------------------"		<< std::endl << std::endl;
	std::cout << "Press 1 to research by Name.    "		             << std::endl;
	std::cout << "Press 2 to research by Surname. "                << std::endl;
	std::cout << "Press 3 to research by ID.      "		             << std::endl;
	std::cout << "Press 0 to exit.                "   << std::endl << std::endl;
	
	//start decision and choice how want to enter on system
	int choice;
	std::cin >> choice;

	if (choice == 1)
	{	
		std::string name;
		std::cout << "Person name: " << std::endl;
		std::cin.ignore();
		std::getline(std::cin, name);
		
		for (const auto& pair : librarySystem)
		{
			if (pair.second->name() == name)
			{
				std::cout << *(pair.second) << std::endl;
				found = true;
			}
		}

		if (!found)
		{
			std::cout "Wrong name. " << std::endl;
		}

	
	else if (choice == 2)
	{
		std::string surname;
		std::cout << "Person surname: " << std::endl;
		std::cin >>cin.ignore();
		std::getline(std::cin, name);
		
		for (const auto& pair : librarySystem)
		{
			if (pair.second->surname() == surname)
			{
				std::cout << *(pair.second) << std::endl;
				found = true;
			}
		}


	else if (choice == 3)
	{
		int id;
		std::cout << "Enter with person ID: " << std::endl;
		std::cin >> id;
	
		auto it = librarySystem.find(id);
		if (it != librarySystem.end())
		{
			std::cout << *(it->second) << std::endl;
		}
		else
		{
			std::cout << "User not found. " << std::endl;
		}

	else if (choice == 4)
	{
		return EXIT_SUCCESS;
	}
	
	else 
	{
		std::cout << "Error, command not available. " << std::endl;
		return EXIT_SUCCESS;
	}

}
*/
