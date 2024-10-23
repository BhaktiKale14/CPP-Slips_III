/*Q.1) Write a C++ program to create a class ‘MyNumber’ with three data members of type 
integer. Create and initialize the object using default constructor, parameterized 
constructor and parameterized constructor with default value. Write a member function to 
display average of given three numbers for all objects.                      [15M]*/
#include<iostream>
using namespace std;
class MyNumber
{
    int a,b,c;
    public:
    MyNumber()
    {
        a=10;
        b=20;
        c=30;
    }
    MyNumber(int a, int b,int c)
    {
        this->a=a;
        this->b=b;
        this->c=c;

    }
    MyNumber(int a,int b,long int c=3)
    {
        this->a=a;
        this->b=b;
        this->c=c;
    }
    void average()
    {
        int avg=(a+b+c)/3;
        cout<<"\n Average ="<<avg;
    }
};
int main()
{
    MyNumber m1;
    MyNumber m2(2,4,6);
    MyNumber m3(8,4);
    m1.average();
    m2.average();
    m3.average();
}