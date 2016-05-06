/* Exercise 27
 *
 * Write a program that asks the user to type a random number. Write in output if this numbers is a prime number or not. Write, by which numbers can your number be divided.
 *
 *
 */


#include <iostream>
#include <vector>


using namespace std;

int main() {

    int input;
    vector<int> arr;
    cin >> input;
    cout << "Please type an integer. "<< endl;

    for (int i = 2; i <= input / 2 ; i++) {
        if (input % i == 0){
            arr.push_back(i);
        }
    }

    if (arr.empty()){
        cout << "Prime number" << endl;
    }

    for(int arrs: arr){
        cout << "This number can divide your random number -> "<< arrs << endl;
    }
}