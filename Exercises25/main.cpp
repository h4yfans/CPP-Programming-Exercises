/*
 * Exercise 25
 *
 * The country A has 50M inhabitants, and its population grows 3% per year. The country B, 70M and grows 2% per year.
 * Tell in how many years A will surpass B.
 */



#include <iostream>

using namespace std;

int main() {

    double countryA = 50;
    double countryB = 70;
    int count = 0;


    while (countryB>countryA) {
        countryA = countryA + (countryA/100)*3;
        countryB = countryB +(countryB/100)*2;
        count++;
    }

    cout << "in " << count << " years countryA will have a greater population than countryB" << endl;




}