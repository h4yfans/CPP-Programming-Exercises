// Exercises 14
// Write a program that asks the user to type the value of N and computes N! .



#include <iostream>

using namespace std;

int f(int n) {
    return (n == 1 ? n : n * f(n - 1));
}


int main() {

    cout << "Please type an integer for computes N!" << endl;

    int input;

    cin >> input;


    cout << input << "! = " << f(input) << endl;
}