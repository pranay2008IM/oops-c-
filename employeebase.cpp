//employeebase.cpp
#ifndef employeebase_cpp
#define employeebase_cpp
#include<iostream>
using namespace std;
class employeebase
{
    protected:
    int empid;
    string name;
    float grosspay;
    public:
    employeebase()
    {
        cout<<"employeebase consturctor"<<endl;
    }
    void setempid(int temp)
    {
        empid=temp;
    }
    int getempid()
    {
        return empid;
    }
    void setname(string temp)
    {
        name =temp;
    }
    string getname()
    {
        return name;
    }
    public:virtual void justname()=0;
    public:virtual float getgrosspay()=0;
    public:virtual void display()=0;

};
#endif