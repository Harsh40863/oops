#include<bits/stdc++.h>
using namespace std;
class employee{

    string s;

    public:
     void read(void);
     void write(void);
};

void employee ::read()
{
    cout<<"enter the number"<<endl;
    cin>>s;
}
void employee ::write()
{
    for(int i=0;i<s.size();i++)
    {
        if(s.at(i)!='0' && s.at(i)!='1')
        {
            cout<<"not binary"<<endl;
        }
    }

}