/*
 * Exercises 29
 *
 * Write a program to find out no. of Even & Odd no. in a given Data Series.
 *
 */

#include <iostream>

using namespace std;

int main() {
    unsigned data[]{0,1,2,3,4,5,6,7,8,9}, even_n{0}, odd_n{0};
    cout <<"given nubmers " ;
    for (auto &tmp: data){
            cout << tmp << " ";
            if  (tmp%2==0) {
                even_n++;
            }else{
                odd_n++;
            }

        cout << "\nEven no. " << even_n << endl;
        cout << "Oddn no " << odd_n << endl;

    }

}