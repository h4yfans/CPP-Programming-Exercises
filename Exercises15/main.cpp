/*
 * Exercises 15
 * Write a program that asks the user to type an integer N and that indicates if N is a prime number or not.
 */


#include <iostream>

using namespace std;

int main() {

    int input;
    cout << "Please enter an integer. Machine will tell the number, prime number or not" << endl;

    cin >> input;


    for (int i = 2; i <  input; i++) {
        if(input % i == 0){
            cout << input << " <- Not prime number" << endl;
            break;
        }else{
            cout << input << " <- Prime number " <<endl;
            break;
        }
    }




}