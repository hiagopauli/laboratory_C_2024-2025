#include <iostream>
using namespace std;


int main() {

	const int numStudent = 3;
	const int numGrades  = 5;

	// Grades of students
	int grades[numStudent][numGrades];


	// Data of grades for each student
 	for (int i = 0; i < numStudent; ++i) {
		cout << "Enter all 5 exam score (0 to 10) of student " << i + 1 << ":\n";
		for (int j = 0; j < numGrades; ++j) {
			cin >> grades[i][j];
		}
	}

	// Each student grade
	for (int i = 0; i < numStudent; ++i) {

		// Calculate sum 
		int sum = 0;
		for (int j = 0; j < numGrades; ++j) {
			sum += grades[i][j];
		}
		
		// Calculate average
		int average = sum / 5;		


		// Median calculate 
		int median = grades[i][2];

		// Determine if student will pass or not 50%
		string result = (average >= 5) ? "Pass" : "Fail";

		// Print the result of  students
		cout << "student: " << i + 1 << "\n";
		cout << "sum: " << sum << "\n";
		cout << "average: " << average << "\n";
		cout << "median: " << median << "\n";
		cout << "result: " << result << "\n";
	}
	

	return EXIT_SUCCESS;

}

