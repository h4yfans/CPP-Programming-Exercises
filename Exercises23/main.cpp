/*
 * Exercises 23
 *
 * Request the user to type positive numbers, or to stop by typing a number smaller than 1. Print the average.
 *
 */


#include <iostream>

using namespace std;

int main() {

    int input;
    int result = 0;
    int count = 0;
    bool condition = true;
    int sum = 0;



    while (condition) {
        cin >> input;
        if (input > 1) {
            sum += input;
            count++;
        } else {
            result = sum / count;
            cout << "You typed " << count << " positive numbers and average is "  << result << endl;
            condition = false;
        }
    }
}