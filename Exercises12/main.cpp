// Exercises 12
/*
Write a program that asks the user to type an integer N and compute u(N) defined with :
u(0)=3
u(1)=2
u(n)=n*u(n-1)+(n+1)*u(n-2)+n
 */

#include <iostream>

using namespace std;


int u(int n){

        if (n==0)
            return 3;
        if(n==1)
            return 2;
        else
            return n*u(n-1)+(n+1)*u(n-2)+n;

}

int main() {

    int input;

    cout << "Please type an integer value: " << endl;
    cin >> input;

    cout << "Your value is " << u(input);





}