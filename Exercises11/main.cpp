// Exercises 11
/*
 * Write a program that asks the user to type a positive integer. When the user types a negative value the program writes ERROR and asks for another value.
 * When the user types 0, that means that the last value has been typed and the program must write the average of the positive integers.
 * If the number of typed values is zero the program writes 'NO AVERAGE'.
 */

#include <iostream>

using namespace std;

int main() {

    int input;
    int sum=0;
    int count=0;
    do {
    cout << "Please type a positive integer value. (Type '0' when you want to calculate an average)" << endl;
    cin>>input;
        if (input < 0){
            cout << "ERROR, please type positive integer value "<< endl;
            continue;
        }else if(input > 0){
            sum += input;
            count++;
        }else if(input==0){
            if (count == 0){
                cout << "NO AVERAGE" << endl;
            }else{
                cout << "AVERAGE IS " << sum/count << endl;
            }
        }
    } while (input!=0);
}