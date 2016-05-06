/*
 * Exercises 17
 * Write a program that asks the user to type the value of an integer N and compute the N-st prime number.
 */

#include <iostream>


using namespace std;

bool  is_prime(int n){
    for (int i = 2; i < n ; i++) {
        if ((n%i) ==0){
            return false;
        }
    }
    return true;
}


int main(){
    int input = 0;
    int count = 0;
    cout << "Please type an integer value : ";
    cin >> input;

    for (int i = 2; i <= input ; i++) {
        if (is_prime(i)){
            count++;
            cout << count << ". prime number - >" << i << endl;
        }
    }
}

