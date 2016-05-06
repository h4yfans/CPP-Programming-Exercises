
/* Exercises 21
 *
 * Request the user to type numbers, each time printing its triple, until the user enter -999
 *
 */



#include <iostream>

using namespace std;

int main() {

    int input ;
    bool condition = true;

    cout << "Please type a number. If want to quit type '-999'" << endl;

    while(condition){
        cin>>input;
        if (input==-999){
            condition=false;
            exit(0);
        }else{
            input*=3;
            cout << input << endl;

        }
    }
}