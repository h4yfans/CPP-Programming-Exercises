// Exercises 5
// Write a program that asks the user to type 10 integers and writes the smallest value.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int input;
    vector<int> vec;
    cout << "Type 10 integers" << endl;

    for (int i = 0; i < 10; i++) {

        cin >> input;
        vec.push_back(input);
    }

    sort(vec.begin(), vec.end());

    cout << "Smallest value is " << vec[0];
}


