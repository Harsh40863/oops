#include <bits/stdc++.h>
using namespace std;
class student
{
    protected:
    int roll_no;

    public:
    void set_number(int);
    int get_number();
};
void student::set_number(int r)
{
    roll_no=r;
}
int student :: get_number()
{
    return roll_no;
}
class exam:public student
{
    protected:
    int maths;
    int science;

    public:
    void set_marks(int,int);
   

};
void exam :: set_marks(int m,int s)
{
    maths=m;
    science=s;
}

class result :public exam
{
    
    int result;

    public:
    void display()
    {
        cout<<"your roll_no is\t "<<roll_no<<endl<<"your percentage is:\t"<<(maths+science)/2<<endl;


    }


};


int main()
{
    result harsh;

    harsh.set_number(45);
    harsh.set_marks(90,98);

    harsh.display();

    return 0;
}