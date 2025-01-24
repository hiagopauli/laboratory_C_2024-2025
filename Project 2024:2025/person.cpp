#include <iostream>
#include "person.h"


Person::Person(const std::string& name, const std::string& surname, unsigned int age, unsigned int id) :
	_name(name),
	_surname(surname),
	_age(age),
	_id(id)
{
}

const std::string& Person::name() const 
{
	return _name; 
}

const std::string& Person::surname() const
{
	return _surname;
}
		
int Person::age() const 
{ 
	return _age; 
}
		
int Person::id() const 
{ 
	return _id; 
}	

std::ostream& operator<<(std::ostream& os, const Person& person) 
{
	os 	
			<< "Name: "		 << person._name 		 << std::endl
			<< "Surname: " << person._surname  << std::endl
			<< "Age: "		 << person._age			 << std::endl
			<< "ID: " 		 << person._id			 << std::endl;
  		return os;
}


