#include<bits/stdc++.h>
using namespace std;
class Y;
class X{
    int a;
    public:
    void set_value(int data)
    {
        a=data;

    }
    friend void add(X,Y);
};
class Y{
    int b;
    public:
    void set_value(int data)
    {
        b=data;

    }
    friend void add(X,Y);
};

void add(X o1,Y o2)
{
    cout<<"the sum is"<<o1.a+o2.b<<endl;


}

int main()
{
    X a;
    a.set_value(3);
    Y b;
    b.set_value(4);
    add(a,b);


}