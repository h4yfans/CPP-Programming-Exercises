/*
 * Exercises 20
 *
 * u(n) defined with
 * u(0) =a (a is an integer)
 *  if u(n) is even then
 *           u(n+1) = u(n)/2, else
 *           u(n+1) = 3*u(n)+1
 *
 *  Conjecture : For all value of a, there exist a value N such that u(N) = 1
 *
 *
 *  a) Write program that asks the user to type the value of an integer a and writes all the values of u(n) from n=1 to n=N
 */

#include <iostream>

using namespace std;




int main() {
    int a,n,u;
    cout<<"Type the value of a : ";cin>>a;
    n=0;
    u=a;

    while(u!=1)
    {
        if(u%2==0)u=u/2; else u=3*u+1;
        n++;
        cout<<"u("<<n<<")="<<u<<endl;
    }


}