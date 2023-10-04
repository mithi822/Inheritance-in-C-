#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int empID;
    void EmployeeInfo() {
        cout << "Enter Employee Name: ";
        cin>>name;
        cout << "Enter Employee ID: ";
        cin >> empID;
    }

    void pEmployeeInfo() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << empID << endl;
    }
};
class Department : public Employee {
public:
    string department;
    void DepartmentInfo() {
        cout << "Enter Department: ";
        cin>>department;
    }

    void pDepartmentInfo() {
        cout << "Department: " << department << endl;
    }
};
class ProvidentFund : public Employee {
public:
    double pfAmount;
    void PFInfo() {
        cout << "Enter PF Amount: ";
        cin >> pfAmount;
    }
void pPFInfo() {
        cout << "PF Amount: " << pfAmount << endl;
    }
};
int main() {
    Department departmentInfo;
    ProvidentFund pfInfo;

    cout << "Enter Employee Information:" << endl;
    departmentInfo.EmployeeInfo();
    departmentInfo.DepartmentInfo();
    pfInfo.PFInfo();

    cout << "\nPrinting Employee Information:" << endl;
    departmentInfo.pEmployeeInfo();
    departmentInfo.pDepartmentInfo();
    pfInfo.pPFInfo();

    return 0;
}

