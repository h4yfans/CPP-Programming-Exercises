/*
 * Write a program that asks the user to type the value of N and display an output like the following:

 N=1
 *
 N=2
 **
  *
 N=3
 ***
  **
    *
 */


#include <iostream>

using namespace std;


int main() {

    int input;
    int space = 0;
    bool condition = true;
    cout << "Please type an integer value" << endl;
    cin >> input;


    while (condition) {


        for (int j = 0; j < space; j++) {
            cout << " ";
        }
        space++;

        for (int i = 0; i < input; i++) {
            cout << "*";
        }
        input--;
        cout << endl;


        if (input == 0) {
            condition = false;
        }
    }


}