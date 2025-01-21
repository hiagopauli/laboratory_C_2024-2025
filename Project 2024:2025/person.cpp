#include "person.h"

Person::Person(const std::string& name, unsigned int age, int id) :
	_name(name),
	_age(age),
	_id(id)
{

}

const std::string& Person::name() const 
{
	return _name; }
		
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
    os << "Name: " << person._name << endl;
       << "Age: " << person._age << endl;
       << "ID: " << person._id;
    return os;
}
