// Exercises 4
// Write a program that asks the user to type 10 integers and writes the sum of these integers.

#include <iostream>
using namespace std;

int main() {

    int input;
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        cout << "Enter the " << i << "th number" <<endl;
        cin >> input;
        sum +=input;
    }

    cout<< "Sum: " << sum << endl;1

}