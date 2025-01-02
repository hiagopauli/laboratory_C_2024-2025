#include <iostream>
#include <random>

int main()
{
  std::cout << "Array" << std::endl;
  
  // Random generator
  std::random_device rd;
  std::mt19937 gen(rd());
  std::uniform_int_distribution<> dis(0, 50);

  // Fill the original array
  int array[7];

  for (int i{0}; i < 7; ++i) {
    array[i] = dis(gen) ; 
  } 
  
  // Copy values inverted way
  int arrayinvert[7];
	
  for (int i{0}; i < 7; ++i) {
    arrayinvert[i] = array[6-i] ;
  }
 
  // Print original array
  std::cout << "Original Array\n";
  
  for (int i{0}; i < 7; ++i) {
    std::cout << array[i] << '\n' ;
  }

  // Print inverted array
  std::cout << "Inverted Array\n";
  
  for (int i{0}; i < 7; ++i) {
    std::cout << arrayinvert[i] << '\n' ;
  }
 
  return EXIT_SUCCESS;
}
