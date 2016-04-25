//Exercises 3
//Write a program that asks the user to type all the integers between 8 and 23 (both included) using a while.

#include <iostream>
using namespace std;


int main() {

    int currentNumber = 8;
    int inputNumber;

    bool condition = true;

    while(condition){
        cout << "Type   "<< currentNumber<<   endl;
        cin >> inputNumber;
            if(currentNumber!=inputNumber){
                cout << "Please follow the instructors" << endl;
            }else{
                currentNumber+=1;
            }

            if (currentNumber == 24){
                condition= false;
                cout << "End of the While loop";
            }

    }

}