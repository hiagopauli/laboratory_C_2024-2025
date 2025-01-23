#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "book.h"
#include "database.h"

void createUser(DataBase& database)
{
	std::string name;
	std::string surname;
	unsigned int age;
	
	std::cout << "What is your name? "     << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	
	std::cout << "what is your surname? "  << std::endl;
	std::cin.ignore();
	std::getline(std::cin, surname);
	
	std::cout << "what is your age? "      << std::endl;
	std::cin >> age;

	Person* person = database.addPerson(name, surname, age);
	
	std::cout << "User created with success." << std::endl;
	std::cout << "User ID: " << person->id()   << std::endl;
}



void printAllUsers(const std::map<int, std::shared_ptr<Person>>& librarySystem)
{
	if (librarySystem.empty())
	{
		std::cout << "No users in the system." << std::endl;
		return;
	}	

	std::cout << "All users: " << std::endl;
	for (const auto& pair : librarySystem)
	{
		std::cout << "ID: "      << pair.first 						 << std::endl;
		std::cout << "Name: "    << pair.second->name()    << std::endl;
		std::cout << "Surname: " << pair.second->surname() << std::endl;
		std::cout << "Age: "     << pair.second->age() 		 << std::endl;
	}
}

void printAllUsers(const DataBase& database)
{
	std::vector<Person*> people = database.getAllPeople();

	for (Person* person : people) {
		std::cout << person->name() << " "  << person->surname() << " "  << person->id() << '\n';
	}
}

int main()
{
	DataBase database;
	int choice;
	
	//start a loop continuous
	while (true)
	{

		//Menu
		std::cout << "-------------------------------------------------------" << std::endl << std::endl;
		std::cout << "Press 1 if you want creat an user."                      							<< std::endl;
		std::cout << "Press 2 if you want search user by name, surname or id." 							<< std::endl;
		std::cout << "Press 3 if you want print all books. "                   							<< std::endl;
		std::cout << "Press 4 if you want print all people in the system. "    							<< std::endl;
		std::cout << "Press 5 to add a borrowed book to a person. "            							<< std::endl;
		std::cout << "Press 6 to remove a borrowed book from a person. "       							<< std::endl;
		std::cout << "Press 0 to exit."																				 << std::endl << std::endl;
	
		std::cin >> choice;
		
		if (choice == 1)
		{
			createUser(database);
		}
			
		else if (choice == 2)
		{
			//searchUber(librarySystem);
		}

		else if (choice == 3)
		{
		}

		else if (choice == 4)
		{
			printAllUsers(database);
		}
	
		else if (choice == 5)
		{
		}

		else if (choice == 6)
		{
		}

		else if (choice == 0)
		{
			std::cout << "Exite with success." << std::endl;
			break;
		}
		else 
		{
			std::cout << "Erro. " << std::endl;
			return EXIT_FAILURE;
		}
	
	}
		return EXIT_SUCCESS;
















}
