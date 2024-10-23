/*Q.2) Write a C++ program to create a class Student with data members Roll_No, 
Student_Name, Class. Write member functions to accept and display Student information 
also display count of students. (Use Static data member and Static member function). [10M]*/

#include<iostream>
using namespace std;
class student
{
    int rno;
    string name,cl;
    public:
    void accept()
    {
        cout<<"\nEnter rno:";
        cin>>rno;
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter class:";
        cin>>cl;
    }   
     void display()
    {
        static int c=1;
        cout<<"\n***Student count="<<c++<<"***";
        cout<<"\n\nEnter rno:"<<rno;
        cout<<"\nEnter Name:"<<name;
        cout<<"\nEnter class:"<<cl<<"\n";
        
    }
};
int main()
{  
   student s;
   s.accept();
   s.display();
   s.accept();
   s.display();
   s.accept();
   s.display();
   s.accept();
   s.display();

}