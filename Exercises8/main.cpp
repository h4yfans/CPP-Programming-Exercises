// Exercises 8
// Write a program that asks the user to type an integer N and compute u(N) defined with :
// u(0)=1
// u(1)=1
// u(n+1)=u(n)+u(n-1)

#include <iostream>

using namespace std;

int main() {

    int input;
    int u = 1;
    int result;

    cout << "Please type an integer value " << endl;
    cin>>input;

    for (int i = 0; i < input; ++i) {
        result = u + u - 1;
        u =  result;
    }

    cout << "u(" << input << ") -> " << u << endl;


}