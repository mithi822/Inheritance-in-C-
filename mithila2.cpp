#include<iostream>
using namespace std;

class parent
{
    private:
        string name;
        int ID;
    public:
        void setvalue(string name,int ID)
        {
          this->ID = ID;
          this->name = name;
        }
        void displayparent()
        {
            cout<<name<<" "<<ID<<endl;
        }
};
class child : public parent
{
public:
    void childdisplay()
    {
        cout<<"I am from child"<<endl;
        string name1;
        int ID2;
        cout<<"Enter name and ID"<<endl;
        cin>>name1>>ID2;
        setvalue(name1,ID2);
        displayparent();
        }
} ;

int main()
{
    child obj;
    obj.childdisplay();
    return 0;
}
