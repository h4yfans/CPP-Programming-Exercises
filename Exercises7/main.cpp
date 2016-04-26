// Exercises 7
// Write a program that asks the user to type an integer N and compute u(N) defined with :
// u(0)=3
// u(n+1)=3*u(n)+4

#include <iostream>

using namespace std;

int main() {

    int input;
    int result;
    int u = 3;


    cout << "Please type an integer for calculation" << endl;
    cin >> input;

    if (input == 0) {
        cout << "u(0) -> " << u << endl;
    } else {
        for (int i = 1; i <= input; i++) {
            result = 3 * u + 4;
            u = result;
        }

        cout << "u(" << input << ") -> " << result << endl;

    }


}