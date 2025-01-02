#include <iostream>
#include <random> 
#include <set>

int main()
{

  std::cout << "Array" << std::endl;


  // Random generator
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0,100);

  // Fill first array
  int array[10]; 

  for (int i{0}; i<10; ++i) {
    array[i] = dis(gen) ; 
  } 

  // Fill second array
  int secondarray[10];
  
  for (int j{0}; j<10; ++j) {
    secondarray[j] = dis(gen) ;
  }

  // Print first array
  std::cout << "First array\n";

  for (int i{0}; i<10; ++i) {
    std::cout << array[i] << '\n' ;
  }
  std::cout << "\n";

  // Print second array
  std::cout << "Second array\n";

  for (int j{0}; j<10; ++j) {
    std::cout << secondarray[j] << '\n' ;
  }
  std::cout << "\n";

  
  // Find mutual number's
  std::set<int> set1(array, array + 10);

  //Check and print mutual number's
  std::cout << "Mutual numbers: ";
  bool found = false; 

  //Flag to check if found some mutual number's
  for (int j = 0; j <10; ++j)  {
    if (set1.find(secondarray[j]) != set1.end())  {
        std::cout << secondarray[j] << " ";
        found = true;
        break;
    }
  }
  if (!found) {
    std::cout << "Dont have mutual number's.\n";
  } else { 
    std::cout << "\n";
  } 

  return 0;
}
