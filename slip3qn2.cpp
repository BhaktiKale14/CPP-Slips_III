/*Q.2) Write a C++program to calculate following series: 
(1*1) +(2*2) +(3*3) + … +(n*n).                        [10M]*/
#include<iostream>
using namespace std;
int main()
{
    int i,sum=0,n;
    cout<<"Enter the value";
    cin>>n;
    for(int i=1;i<n;i++)
    {
        sum=sum+(i*i);
    }
    cout<<"sum is:"<<sum;
}