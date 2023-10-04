#include<iostream>
using namespace std;

class Empersonal
{
public:
    string name;
    int age;
    void personal()
    {
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter age:";
        cin>>age;
    }
};
class Employee
{
public:
    int empID;
    int salary;
    void EmployeeInfo()
    {
        cout<<"Enter employee Id:";
        cin>>empID;
        cout<<"Enter employee salary:";
        cin>>salary;

    }
};
class Details : public Empersonal, public Employee
{
    public:
    void displayDetails()
    {
        cout<<"Employee Information"<<endl;
        cout<<""<<endl;
        personal();
        EmployeeInfo();
        cout<<""<<endl;
        cout<<"Name:"<<name<<endl<<"Age:"<<age<<endl<<"ID:"<<empID<<endl<<"Salary:"<<salary<<endl;

    }
};

int main()
{
    Details obj;
    obj.displayDetails();
    return 0;
}



