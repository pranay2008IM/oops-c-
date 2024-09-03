#include<iostream>
#include<string>
#include "strudentbase.cpp"
class mathstudent:public student
{
    private:
    float math_midterm_percetnage;
    float math_finalexam_percetnage;
    public:
    mathstudent()
    {
        cout<<"math student constructor"<<endl;
        math_midterm_percetnage=0.5;
        math_finalexam_percetnage=.50;
        
    }
    void calculate()
    {
        char response[256];
        string moregradetocalculate;
        cout<<"enter the midterm grade"<<endl;
        cin.getline(response,256);
        setmidterm(atoi(response));
        cout<<"enter the final examination grade"<<endl;
        cin.getline(response,256);
        setfinalexamgrade(atoi(response));
        finalnumericgrage=(midterm*math_midterm_percetnage)+(finalexamgrade*math_finalexam_percetnage);
        if(finalnumericgrage>=90)
        finallettergrade='A';
        else
        if((finalnumericgrage>=83)&&(finalnumericgrage<90))
        finallettergrade='B';
        else
        if((finalnumericgrage>=76)&&(finalnumericgrage<83))
        finallettergrade='C';
        else
        if((finalnumericgrage>=65)&&(finalnumericgrage<76))
        finallettergrade='D';
        else
        if(finalnumericgrage<65)
        finallettergrade='F';
        cout<<"finalnumericgrade"<<finalnumericgrage<<endl;
        cout<<"finallettergrade"<<finallettergrade<<endl;
    }
    

};