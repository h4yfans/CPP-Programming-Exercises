/*
 * Exercises 22
 *
 * Request the user type positive numbers until either a zero or negative is typed, and then show the user how many positives were typed in.
 */



#include <iostream>

using namespace std;

int main() {
    int input;
    int count = 0;
    bool condition = true;

    cout << "Please type positive numbers. " << endl;

    while(condition){
        cin >> input;
        if (input >0){
            count++;
        }else{
            cout << "You typed " << count << " positive numbers" << endl;
            condition = false;
        }
    }

}