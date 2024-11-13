#include<bits/stdc++.h>
using namespace std;
class employee
{
    public:
    int id;
    float salary;
    employee(int idp)
    {
        id=idp;
        salary=32.0;

    }
    employee(){};
};
//derived class
//default visiblity mode is private
//private member will never inherited
class programmer: employee{
    public:
    int languagecode=9;

    programmer(int i)
    {
        id=i;

    }
    void get_data()
    {
        cout<<"the id of ajay is :"<<id<<endl;
    }
    

};
int main()
{
    employee rohan(1),harry(2);
    cout<<"the id of rohan:"<<rohan.id<<endl;
    cout<<"the id of harry:"<<harry.id<<endl;
    cout<<"the salary is:"<<rohan.salary<<endl;

    programmer ajay(5);

    ajay.get_data();

    




 
return 0;
}