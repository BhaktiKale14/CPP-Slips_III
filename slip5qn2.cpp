/*Q.2) Write a C++ program to accept ‘n’ float numbers, store them in an array and print the 
alternate elements of an array. (Use dynamic memory allocation).                     [10M]*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. of elements in array::";
    cin>>n;
    float *a= new float[n];
    cout<<"enter the array elements::";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array elements::";
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
   }
    cout<<"alternate elements::";
    for(int i=0;i<n;i=i+2)
    {
        cout<<a[i]<<endl;
    }
}