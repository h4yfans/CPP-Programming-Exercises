// Exercises9
// Write a program that asks the user to type an integer between 0 and 20 (both included) and writes N+17. If someone types a wrong value, the program writes ERROR and he must type another value.


#include <iostream>

using namespace std;

int main() {

    int input;
    bool condition = true;
    string desc = "Please type an integer between 0 and 20 (both included)";

    cout << desc << endl;


    while (condition) {
        cin >> input;
        if (!(input >= 0 && input <= 20)) {
            cout << desc << endl;
        } else {
            cout << "Sum of the " << input << " + 17 -> " << input+17 << endl;
            condition = false;
        }
    }

}