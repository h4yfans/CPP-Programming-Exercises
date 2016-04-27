// Exercises 13
// Write a program that asks the user to type 10 integers and write the number of occurrence of the biggest value.

#include <iostream>
#include <vector>

using namespace std;

int main() {


    int input;
    int big = 0;
    vector<int> arr;

    cout << "Please type 10 integers and machine will find biggest value"<< endl;

    for (int i = 0; i < 9; i++) {
        cin >> input;
        arr.push_back(input);
    }

    for (int j = 0; j < 9; j++) {
        if (arr[j] > big) {
            big = arr[j];
        }
    }

    cout << "Biggest value is: " << big << endl;

}