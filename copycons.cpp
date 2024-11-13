#include<bits/stdc++.h>
using namespace std;
class number
{
    int a=0;
    public:
    number(){}
    number(int data){
        a=data;
    }
    number(number &obj)
    {
        a=obj.a;
    }
    void display()
    {
        cout<<"the number is"<<a<<endl;
    }
};
int main()
{  
    number x,y,z(45);

    x.display();
    y.display();
    z.display();
    number z1(z);
    z1.display();

     
 
   return 0;
}