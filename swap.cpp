#include<bits/stdc++.h>
using namespace std;
class c2;
class c1{
    int a;
    public:
    void set_value(int data)
    {
        a=data;
        cout<<"the data of class 1"<<a<<endl;
    }
    void display()
    {
        cout<<a<<endl;
    }
    friend void j(c1 &,c2 &);
};
class c2{
    int b;
    public:
    void set_value(int data)
    {
        b=data;
        cout<<"the data of class 2"<<b<<endl;
    }
     void display()
    {
        cout<<b<<endl;
    }
    friend void j(c1 &,c2 &);
};
void j(c1 &o1,c2 &o2)
{
    int temp;
    temp=o1.a;
    o1.a=o2.b;
    o2.b=temp;
}
int main()
{

    c1 t;
    c2 h;

    t.set_value(3);
    h.set_value(4);

    j(t,h);

    t.display();
    cout<<endl;
    h.display();


}