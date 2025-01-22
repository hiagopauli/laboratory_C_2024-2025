#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <map>
#include "book.h"

void createUser(std::map<int, std::shared_ptr<Person>>& librarySystem)
{
	std::string name;
	std::string surname;
	int age;
	
	std::cout << "What is your name? "     << std::endl;
	std::cin.ignore();
	std::getline(std::cin, name);
	
	std::cout << "what is your surname? "  << std::endl;
	std::cin.ignore();
	std::getline(std::cin, surname);
	
	std::cout << "what is your age? "      << std::endl;
	std::cin >> age;
	
	// generate id based on age and counter
	int generatedId = age * 100;
 
	
	//add the new user on the system
	librarySystem[generatedId] = std::make_shared<Person>(name, surname, age, generatedId);
	
	std::cout << "User created with success." << std::endl;
	std::cout << "User ID: " << generatedId   << std::endl;
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


int main()
{
	std::map<int, std::shared_ptr<Person>> librarySystem;
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
			createUser(librarySystem);
		}
			
		else if (choice == 2)
		{
		}

		else if (choice == 3)
		{
		}

		else if (choice == 4)
		{
			printAllUsers(librarySystem);
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
			return EXIT_SUCCESS;
		}
		else 
		{
			std::cout << "Erro. " << std::endl;
		}
	
	}
	
	return EXIT_SUCCESS;
}
