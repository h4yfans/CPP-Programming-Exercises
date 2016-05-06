/*
 * Exercise 24
 *
 * Request the user to type numbers, or type 0 to stop.
 * Show how many numbers were between 100 and 200 (both included)
 *
 */



#include <iostream>

using namespace std;

int main() {

    int input;
    int count = 0;
    bool condition = true;

    cout << "Please typed numbers. Type 0 for exit" << endl;

    while (condition) {
        cin >> input;
        if (input > 99 && input < 201) {
            count++;
        } else if (input == 0) {
            cout << "You typed " << count << " numbers between 100 and 200" << endl;
            condition = false;
            exit(0);
        }
    }
}