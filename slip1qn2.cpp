/*Q.2) Write a C++ program to create a class MyDate with three data members as dd, mm, yyyy. 
Create and initialize the object by using parameterized constructor and display date in dd-
mon-yyyy format. (Input: 19-12-2014 Output: 19-Dec-2014). (Use the concept of dynamic 
initialization of object).                                      [10 M]*/

#include<iostream>
using namespace std;
class MyDate
{
    int dd,mm,yyyy;
    public:
        MyDate(int dd,int mm,int yyyy)
        {
            this->dd=dd;
            this->mm=mm;
            this->yyyy=yyyy;
        }
        void displaydate()
        {
            string m[]={"jan","feb","march","april","May","june","july","aug","sept","oct","nov","dec"};
            cout<<dd<<"-"<<m[mm-1]<<"-"<<yyyy;
        }
};
int main()
{
    MyDate *d= new MyDate(18,10,2024);
    d ->displaydate();
}