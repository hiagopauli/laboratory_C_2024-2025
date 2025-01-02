#include <iostream>
#include <cstdlib>

int main () {
	const int size = 7; 
	int arr[size];

	// Input for 7 integers
	std::cout << "Enter 7 integers: ";
	for (int i = 0; i < size; ++i) {
		std::cin >> arr[i];
	}

	// Insert value and comparing elements
	for (int i = 1; i < size; ++i) {
		int current = arr[i];
		int j = i -1;
		
		// Moving elements on sequence position
		while (j >= 0 && arr[j] > current) {
			arr[j + 1] = arr[j];
			--j;

		}

		// Value in right position
		arr[j + 1] = current;
	}

	// Output ascendent order
	std::cout << "Ascending order: ";
	for (int i = 0; i < size; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << std::endl;

	return EXIT_SUCCESS;

}
