/*Q.1) Create a C++ class Employee with data members E_no, E_Name, Designation and Salary. 
Accept two employee’s information and display information of employee having maximum 
salary. (Use this pointer).                            [15M]*/

#include<iostream>
using namespace std;
class Employee
{
    int eno,salary;
    string ename,design;
    public:
    Employee(int eno,string ename,string design,int salary)
    {
        this->eno=eno;
        this->ename=ename;
        this->design=design;
        this->salary=salary;
    }
    void display()
    {
        cout<<"\n Eno::"<<eno;
        cout<<"\n Ename::"<<ename;
        cout<<"\n Designation::"<<design;
        cout<<"\n Salary::"<<salary;
    }
    void maximum(Employee e1,Employee e2)
    {
        if(e1.salary>e2.salary)
        {
            e1.display();
        }
        else
        {
            e2.display();
        }
    }
};
int main()
{
    Employee e1(56,"bhakti","khokar",20000);
    e1.display();
    Employee e2(67,"prajakta","khokar",200000);
    e2.display();
    cout<<"\n \nEmployee maximum salary::";
    e1.maximum(e1,e2);
}