#include "library.h"

Library::Library(DataBase* database) : _database(database)
{

}

bool Library::rent(unsigned int personId, unsigned int bookId)
{
  if (!_database->findRentBook(bookId)) {
    _database->addRent(personId, bookId);
    return true;
  }

  return false;
}

void Library::returnBook(unsigned int bookId)
{
  _database->removeRent(bookId);
}
