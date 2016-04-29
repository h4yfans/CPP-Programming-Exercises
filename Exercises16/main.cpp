/* Exercises 16
 *  Write a program that asks the user to type an integer N and that writes the number of prime numbers lesser or equal to N.
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

    cout << "Please type an integer value : ";
    cin >> input;

    for (int i = 2; i <= input ; i++) {
        if (is_prime(i)){
            cout << i << endl;
        }
    }


}

