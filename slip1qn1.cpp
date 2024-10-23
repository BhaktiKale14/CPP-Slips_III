/*Q.1) Write a C++ program to calculate area and circumference of a Circle. (Use default argument, 
scope resolution operator and manipulator.)                                  [15 M]

*/

#include<iostream>
using namespace std;
float r;
void area(float pi=3.14)
{
    cout<<"Area::"<<pi*r*r;
}
void cir(float pi=3.14)
{
    cout<<"\n Circumference ::"<<2*pi*r;
}
int main()
{
    cout<<"Enter Radius::";
    cin>>r;
    area();
    cir();
}