/*
 * Exercise 31
 *
 * Write a program to count the numbers which are divisible by 3 in a given Data Series
 *
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int howManyNumbers;
    int input;
    vector<int> dataSeries;

    cout << "How many numbers do you want to add to Data Series" << endl;
    cin >> howManyNumbers;
    cout << "Please add " << howManyNumbers << " numbers " << endl;

    for (int i = 0; i < howManyNumbers; i++) {
        cout << "Please type " << i + 1 << "th number : ";
        cin >> input;
        dataSeries.push_back(input);
    }

    cout << "These numbers can divisible by 3" << endl;

    for (int divisible: dataSeries) {
        if (divisible % 3 == 0) {
            cout << divisible << endl;
        }

    }


}