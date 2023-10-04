#include<iostream>
using namespace std;

class Number {
public:
    int num;
    void number()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
};
class Square : public Number
{
public:
    void square() {
        number();
        cout << "Square of "<<num<<" is:" << num * num << endl;
    }
};
class Cube : public Number
{
public:
    void cube()
    {
        number();
        cout<<"Cube of "<<num<<" is:"<<num* num *num<<endl;
    }
};

int main() {
    Square sobj;
    sobj.square();
    Cube cobj;
    cobj.cube();

    return 0;
}

