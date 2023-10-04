#include<iostream>
using namespace std;

class student1
{
public:
    string Name;
    int Id;
};
class student2 : public student1
{
public:
    void info()
    {
        cout<<"Enter name:\n";
        cin>>Name;
        cout<<"Enter Id:\n";
        cin>>Id;
        cout<<Name<<" "<<Id<<endl;
    }
};

int main()
{
    student2 obj;
    obj.info();
    return 0;

}
