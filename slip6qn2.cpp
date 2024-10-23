/*Q.2) Write a C++ program to calculate maximum and minimum of two integer numbers of two 
different classes (Use friend function). [10M]*/

#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public:
    void accept()
    {
        cout<<"enter the value of a";
        cin>>a;
    }
    friend void max_min(A,B);
};
class B
{
    int b;
    public:
    void accept()
    {
        cout<<"enter the value of b";
        cin>>b;
    }
    friend void max_min(A,B);
};
void max_min(A obj1, B obj2)
{
    if(obj1.a>obj2.b)
    {
        cout<<"\n maximum::"<<obj1.a<<"\n minimum::"<<obj2.b;
    }
    else{
        cout<<"\n Maximum::"<<obj2.b<<"\n minimum"<<obj1.a;
    }
}
int main()
{
    A obj1;
    B obj2;
    obj1.accept();
    obj2.accept();
    max_min(obj1, obj2);
}