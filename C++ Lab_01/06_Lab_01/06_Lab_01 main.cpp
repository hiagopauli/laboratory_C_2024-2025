#include <iostream>
using namespace std;

int recursive_sum(int n) {
  if (n==1) { 
    return 1;
} else {
    return n + recursive_sum(n-1);
   }
}


int main () {
    int n;
    cout << " Enter a number:";
    cin >> n;
    cout << " The sum of numbers from 1 to " << n << " is: " << recursive_sum(n);
    return 0;

}

