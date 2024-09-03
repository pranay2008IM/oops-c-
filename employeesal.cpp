#include<iostream>
#include "employeebase.cpp"
using namespace std;
class sal:public employeebase
{
    private:
    float salary;
    public:
    sal()
    {
        cout<<"salarized employee constructor"<<endl;

    }
    void setsalary(float temp)
    {
        salary=temp;
    }
    float getsalary()
    {
        return salary;
    }
    float getgrosspay()
    {
        grosspay=salary/26;
        return grosspay;
    }
    void display()
    {
        cout<<"*** salyarized employee record***"<<endl;
        cout<<"employee id"<<empid<<endl;
        cout<<"name"<<name<<endl;
        cout<<"annual salary"<<salary<<endl;
        cout<<"gross pay"<<getgrosspay()<<endl;
    }
    void justname()
    {
        cout<<"this is the just name function in the empsal "<<endl;
    }


};