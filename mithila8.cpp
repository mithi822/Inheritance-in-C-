#include <iostream>
class Base1 {
public:
    void display() {
        std::cout << "Base1::display()" << std::endl;
    }
};

class Base2 {
public:
    void display() {
        std::cout << "Base2::display()" << std::endl;
    }
};

class Derived : public Base1, public Base2 {
public:
    void display() {
        std::cout << "Derived::display()" << std::endl;
    }
};

int main() {
    Derived obj;
    obj.display();
}
