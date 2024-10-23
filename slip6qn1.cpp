/*Q.1) Write a C++ program to create a class ‘MyArray’ which contains single dimensional 
integer array of given size. Write a member function to display even and odd numbers 
from a given array. (Use Dynamic Constructor to allocate and Destructor to free memory 
of an object).                                             [15M]*/

#include<iostream>
using namespace std;
class MyArray
{
    int n,*a;
    public:
    MyArray(int n)
    {
        this->n=n;
        a=new int[n];
        cout<<"enter array elements::";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void EvenOdd()
    {
        cout<<"even elements::";
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout<<a[i]<<"   ";
            }
        }
        cout<<"\n odd elements::";
        for(int i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout<<a[i]<<"   ";
            }
        }
    }
};
int main()
{
    int n;
    cout<<"\n enter the no of elements:";
    cin>>n;
    MyArray a(n);
    a.EvenOdd();
}