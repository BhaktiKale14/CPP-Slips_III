/*Q.1) Write a C++ program to create two classes Array1 and Array2 with an integer array as a 
data member. Write necessary member functions to accept and display array elements of 
both the classes. Find and display maximum of both the array. (Use Friend function). 
 [15M]*/

#include<iostream>
using namespace std;
class Array2;
class Array1
{
    int a[30],n,i;
    public:
    void accept()
    {
        cout<<"\n enter the element";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void display()
    {
        cout<<"\n forst array element\n";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<endl;
        }
    }
    friend int maximum(Array1, Array2, int);
};
class Array2
{
    int b[30],n,i;
    public:
    void accept()
    {
        cout<<"\n enter the element";
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
    }
    void display()
    {
        cout<<"\n forst array element\n";
        for(int i=0;i<n;i++)
        {
            cout<<b[i]<<endl;
        }
    }
    friend int maximum(Array1, Array2, int);
};
int maximum(Array1 obj1, Array2 obj2, int n)
{
    int max1=obj1.a[0];
    int max2=obj2.b[0];
    for(int i=0;i<n;i++)
    {
        if(obj1.a[i]>max1)
        {
            max1=obj1.a[i];
        }
    }
    for(int i=0;i<n;i++)
    {
        if(obj2.b[i]>max2)
        {
            max2=obj2.b[i];
        }
    }
    if(max1>max2)
    {
        return max1;
    }
    else{
        return max2;
    }
}
int main()
{
    int n;
    Array1 obj1;
    Array2 obj2;
    cout<<"\n Enter the no of elements";
    cin>>n;
    obj1.accept();
    obj2.accept();
    obj1.display();
    obj2.display();
    cout<<"\n maximum element ::"<<maximum(obj1,obj2,n);
}