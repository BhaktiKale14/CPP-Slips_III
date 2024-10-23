/*Q.2) Write a C++ program to calculate area of cone, sphere and circle by using function 
overloading.                                            [10M]*/

#include<iostream>
using namespace std;
void area(float r,float l)
{
    cout<<"\n Area of cone::"<<3.14f*r*(r+1);
}
void area(float r)
{
    cout<<"\n Area of sphere::"<<4*3.14f*r*r;
}
void area(double r)
{
    cout<<"\n Area of circle"<<3.14*r*r;
}
int main()
{
    area(23.6,65.3);
    area(65.3);
    area(54.3);
}