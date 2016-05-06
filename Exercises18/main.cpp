/*
 * Exercises 18
 * Write a program that asks the user to type the value of N and writes this picture:
  N=1
  *
  N=2
  **
  *
  N=3
  ***
  **
  *
  and so on...
 */

#include <iostream>

using namespace std;

int main() {


    int input;
    bool condition = true;
    cout << "Please type an integer value" << endl;
    cin >> input;


    while (condition) {
        for (int i = 0; i <input ; i++) {
            cout << "*";
        }
        input--;
        cout <<endl;
        if (input == 0){
            condition = false;
        }
    }


}