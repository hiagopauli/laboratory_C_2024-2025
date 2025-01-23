#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <string>
#include <memory>
#include <map>
#include "book.h"
#include "person.h"
#include "database.h"

class Library
{
public:
  Library(DataBase* database);
	~Library() = default;
	
  bool rent(unsigned int personId, unsigned int bookId);
  void returnBook(unsigned int bookId);
private:
  DataBase* _database;
};

#endif
