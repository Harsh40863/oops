#include <bits/stdc++.h>
using namespace std;
class base1{
    protected:
    int base1;
    public:
    void getb1(int a)
    {
        base1=a;
    }

};
class base2
{
     protected:
    int base2;
    public:
    void getb2(int b)
    {
        base2=b;
    }


};
class derived : public base1 ,public base2
{
    public:
    void show()
    {
        cout<<"the class 1 number is:\t"<<base1<<endl;
        cout<<"the class 2 number is:\t"<<base2<<endl;
        cout<<"the sum is :\t"<<base1+base2<<endl;
    }


};
int main()
{
    derived harsh;

    harsh.getb1(4);
    harsh.getb2(5);
    harsh.show();

    return 0;
}