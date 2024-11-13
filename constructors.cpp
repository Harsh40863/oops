#include<bits/stdc++.h>
using namespace std;
class c1{
    int a,b;
    public:
   c1(int ,int);
   void print()
   {
    cout<<"the numbers are"<<a<<" "<<b<<endl;
   }

};
c1::c1(int f,int g)
{
    a=f;
    b=g;
}

int main()
{
    c1 obj(3,5);
    obj.print();


}