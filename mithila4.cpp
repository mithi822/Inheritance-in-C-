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
class C : public B
{
public:
    void displayC()
    {
        cout<<"I am from C"<<endl;
        displayB();
    }
};

int main()
{
    C

     obj;
    obj.displayC();
    return 0;
}
