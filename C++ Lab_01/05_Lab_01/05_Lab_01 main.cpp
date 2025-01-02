
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int choice;

  
    cout << "Choose the shape:" << endl;
    cout << "1. Triangle" << endl;
    cout << "2. Rectangle" << endl;
    cout << "3. Circle" << endl;
    
    cout << "Enter your choice (1, 2, or 3): ";
    cin >> choice;

    if (choice == 1) {
        double base, height;
        cout << "Enter base and height of the triangle: ";
        cin >> base >> height;
        cout << "Area of the triangle: " << 0.5 * base * height << endl;
    } 
    else if (choice == 2) {
        double length, width;
        cout << "Enter length and width of the rectangle: ";
        cin >> length >> width;
        cout << "Area of the rectangle: " << length * width << endl;
    } 
    else if (choice == 3) {
        double radius;
        cout << "Enter the radius of the circle: ";
        cin >> radius;
        cout << "Area of the circle: " << M_PI * radius * radius << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
