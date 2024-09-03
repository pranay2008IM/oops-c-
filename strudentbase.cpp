#ifndef studentbase_cpp
#define studentbase_cpp
#include<iostream>
using namespace std;
class student
{
    protected:
    int midterm;
    int finalexamgrade;
    int research;
    int presentation;
    float finalnumericgrage;
    char finallettergrade;
    public:
    student()
    {
        cout<<"student constructor"<<endl;
        midterm=0;
        finalexamgrade=0;
        research=0;
        presentation=0;
        finalnumericgrage=0;
    }
    protected:
    void setmidterm(int temp)
    {
        if(temp<0||temp>100)
        {
            cout<<"invalid midterm grade"<<temp<<"program termination "<<endl;
            exit(1);

        }
        else
        {
            midterm=temp;
        }
    }
    public:
    int getmidterm()
    {
        return midterm;

    }
    protected:
    void setfinalexamgrade(int temp)
    {
        if(temp<0||temp>100)
        {
            cout<<"invalidd final exam grade"<<endl;
        }
        else{
            finalexamgrade=temp;
        }
    }
    public:
    int getfinalexamgrade()
    {
        return finalexamgrade;
    }
    protected:
    void setresearch(int temp)
    {
        if(temp<0||temp>100)
        {
            cout<<"ivalid research grade"<<endl;
            exit(1);
        }
        else{
            research=temp;
        }
    } 
    public:
    int getresearch()
    {
        return research;
    }
    protected:
    void setpresentation(int temp)
    {
        if(temp<0||temp>100)
        {
            cout<<"invalid presentaiton grade"<<endl;
            exit(1);
        }
        else{
            presentation=temp;
        }
    }
    public:
    int getpresentaion()
    {
        return presentation;
    }
    float getfinalgrade()
    {
        return finalnumericgrage;
    }
    char getfinallettergrade()
    {
        return finallettergrade;
    }
    public:virtual void calculate()=0;


};
#endif