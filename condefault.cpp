#include<bits/stdc++.h>
using namespace std;
class simple
{
    int data1;
    int data2;
    public:
    simple(int a,int b=9)
    {
        data1=a;
        data2=b;
    }
    void print()
    {
        cout<<data1<<" "<<data2<<endl;
    }
};
int main()
{
    simple z(4,8);
    z.print();
  


 
return 0;
}