//Exercise 2
//Write a program that asks the user to type all the integers between 8 and 23 (both included) using a for loop.

#include <iostream>
using namespace std;

int main() {

    int currentNumber = 8;
    int inputNumber;

    for (int i = 8; i < 24; i++) {
        cout << "Type " << i;
        cin >> inputNumber;

        if (inputNumber != currentNumber) {
            i -= 1;
        } else {
            currentNumber += 1;
        }
    }


}

