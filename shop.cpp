#include<bits/stdc++.h>
using namespace std;

class shop
{
    int item_price[100];
    int item_id[100];
    static int  counter;

    public:
    void get_price(void);
    void set_price(void);

};
int shop :: counter;
void shop :: set_price(void)
{
    cout<<"enter the employee id"<<endl;
    cin>>item_id[0];
    counter++;

}
void shop ::get_price(void)
{
    cout<<"enter the number of element"<<endl;
    int n;
    cin>>n;
    cout<<counter<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>item_price[i];
    }
}
int main()
{
    shop rohan,aditya;
    rohan.set_price();
    aditya.set_price();
    rohan.get_price();

}
