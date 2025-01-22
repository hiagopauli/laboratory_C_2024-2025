#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <string>
#include <vector>


class Person 
{
public:	
	Person(const std::string& name, const std::string& surname, unsigned int age, unsigned int id);
		
	const std::string& name() const;
	const std::string& surname() const;
	int age() const;
	int id() const;		

	friend std::ostream& operator<<(std::ostream& os, const Person& person);

private:
	std::string _name;
	std::string _surname;
	int _age;
	int _id;
	std::vector<std::string> borrowed;
};

#endif
