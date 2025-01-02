#include <iostream>


int main() {
  int array [10][10];
  int value = 1;


  //Fill array column and ascending
  for (int col = 0; col < 10; ++col) {
    for (int row = 0; row < 10; ++row)  {
      array[row][col] = value++; 
    }
  }


  // Print array
  for (int row = 0; row < 10; ++row) {
    for (int col = 0; col < 10; ++col) {
      std::cout << array[row][col] << "\t";
    } 
    std::cout << "\n";
  }

  return 0;
}
