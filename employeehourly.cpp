#include<iostream>
#include "employeebase.cpp"
using namespace std;
class hourlemp:public employeebase
{
    protected:
    float hourlyrate;
    int hoursworked;
    public:
    hourlemp()
    {
        cout<<"this is the hourlyemployee constructor"<<endl;
    }
    void display()
    {
        cout<<"*** hourly employee record***"<<endl;
        cout<<"employee id"<<empid<<endl;
        cout<<"name"<<name<<endl;
        cout<<"hourlyrate"<<hourlyrate<<endl;
        cout<<"hourlyworkedd"<<hoursworked<<endl;
        cout<<"gross pay"<<grosspay<<endl;
    }
    public:
    /*
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
        name=temp;
    }
    string getname()
    {
        return name;
    }*/
    void sethourlyrate(float temp)
    {
        hourlyrate=temp;
    }
    float gethourlyrate()
    {
        return hourlyrate;
    }
    void sethoursworked(int temp)
    {
        hoursworked=temp;
    }
    int  gethoursworked()
    {
        return hoursworked;
    }
    float getgrosspay()
    {
        grosspay=hourlyrate*hoursworked;
        return grosspay;
    }
    void justname()
    {
        cout<<"this is the justname func in emphourly "<<endl;
    }
};
