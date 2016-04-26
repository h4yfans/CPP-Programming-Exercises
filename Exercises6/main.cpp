// Exercises 6
// Write a program that asks the user to type an integer N and computes the sum of the cubes from 5^3 to N^3.

#include <iostream>
#include <cmath>

using namespace std;

int main() {

    double input;
    double pwr = 5;
    double sum = 0;

    cout << "Please type an integer " << endl;
    cin >> input;

    double count = input - pwr;

    if (count < 0) {
        count = count * -1;
        for (int i = 0; i <= count; ++i) {
            sum += pow(pwr, 3);
            pwr--;
        }
    }

    if (count > 0) {
        for (int i = 0; i <= count; i++) {
            sum += pow(pwr, 3);
            pwr++;
        }
    }

    cout << sum << endl;

}