/*Q.2) Write a C++ program to define power function to calculate x^y. (Use default value 
 as 2 for y).                               [10M]*/

#include<iostream>
#include<math.h>
using namespace std;
inline void power(int x,int y=2)
{
    cout<<"pow of x="<<pow(x,y);
}
int main()
{
    int x;
    cout<<"Enter the value of x::";
    cin>>x;
    power(x);
}