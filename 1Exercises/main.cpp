
// EXERCISE 1
// Write a program that asks the user to type an integer and writes "YOU WIN" if the value is between 56 and 78 (both included). In the other case it writes "YOU LOSE".

#include <iostream>
using namespace std;

int main() {

    int i;
    cout << "Type an integer" << endl;
    cin >> i;

        if (i >= 56 && i <= 78 ){
            cout << " YOU WIN " << endl;
        }else{
            cout << " YOU LOSE " << endl;
        }

}