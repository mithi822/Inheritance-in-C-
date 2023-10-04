#include<iostream>
using namespace std;

class A
{
public:
    void displayA()
    {
        cout<<"I am from A"<<endl;
    }
};
class B : public A
{
public:
    void displayB()
    {
        cout<<"I am from B"<<endl;
        displayA();
    }
};

int main()
{
    B p;
    p.displayB();
    return 0;

}
