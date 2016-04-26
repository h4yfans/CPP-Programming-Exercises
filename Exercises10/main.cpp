// Exercises 10

/*
Write a program that is able to compute some operations on an integer. The program writes the value of the integer and writes the following menu :

1. Add 1
2. Multiply by 2
3. Subtract 4
4. Quit

The programs ask the user to type a value between 1 and 4. If the user types a value from 1 to 3 the operation is computed, the integer is written and the menu is displayed again. If the user types 4, the program quits.

 */

#include <iostream>

using namespace std;

int main() {

    int input;
    int process;
    cout << "Type an integer for calculation" << endl;
    cin >>input;
    while(true){
        cout << "Choose one of the following operations for your integer:\n"
        << "1. Add 1\n"
        << "2. Multiply by 2\n"
        << "3. Subtract 4\n"
        << "4. Quit\n"
        << "Your choice: ";
        cin >> process;
        switch (process){
            case 1: {input++; break;}
            case 2: {input *=2; break;}
            case 3: {input-=4; break;}
            case 4: {cout << "Bye bye..."; return 0;}
            default: {break;}
        }
        cout << endl << "Answer : " << input << endl;
    }


}