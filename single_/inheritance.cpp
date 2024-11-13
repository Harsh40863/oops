#include <bits/stdc++.h>
using namespace std;

class base
{
    int data1;

public:
    int data2 = 20;
    int setdata1();
};

int base::setdata1()
{
    data1 = 10;
    return data1;
}

class derived : public base
{
    int data3;

public:
    void process();
    void display();
};

void derived::process()
{
    int data1 = setdata1();
    data3 = data1 * data2;
}

void derived::display()
{
    cout << "The data 1 is: " << setdata1() << endl;
    cout << "The data 2 is: " << data2 << endl;
    cout << "The data 3 is: " << data3 << endl;
}

int main()
{
    derived obj;
    obj.process();
    obj.display();

    return 0;
}
