/*Q.1) Design a Base class Customer (name, phone-number). Derive a class Depositor (accno, 
balance) from Customer. Again, derive a class Borrower (loan-no, loan-amt) from 
Depositor. Write necessary member functions to read and display the details of ‘n’ 
customers.                            [15M]*/

#include<iostream>
using namespace std;
class Customer
{
    protected:
    int phn;
    string cname;
    public:
    void accept_cust()
    {
        cout<<"\n enter customer name and phone ";
        cin>>cname>>phn;
    }
};
class Depositor:public Customer
{
    protected:
    int acc_no,balance;
    public:
    void accept_depo()
    {
        cout<<"\n enter the customer account no and balance";
        cin>>acc_no>>balance;
    }
};
class Borrower:public Depositor
{
    int loan_no,amt;
    public:
    void accept_borr()
    {
        cout<<"\n enter the customer loan no and amount";
        cin>>loan_no>>amt;
    }
    void display()
    {
        cout<<"\n Customer name::"<<cname;
        cout<<"\n Customer phone::"<<phn;
        cout<<"\n Customer account no::"<<acc_no;
        cout<<"\n Customer balance::"<<balance;
        cout<<"\n Customer loan no::"<<loan_no;
        cout<<"\n Customer amount::"<<amt;
    }
};
int main()
{
    int n;
    cout<<"\n enter the no of customer:";
    cin>>n;
    Borrower b[n];
    for(int i=0;i<n;i++)
    {
        b[i].accept_cust();
        b[i].accept_depo();
        b[i].accept_borr();
    }
    for(int i=0;i<n;i++)
    {
        b[i].display();
        cout<<endl;
    }
}