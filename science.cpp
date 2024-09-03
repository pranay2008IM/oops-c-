#include<iostream>
#include<string>
#include "strudentbase.cpp"
class science:public student
{
    private:
    float science_midterm_percent;
    float science_finalexam_percet;
    float science_reseatch_percent;
    public:
    science()
    {
        cout<<"science student constructor"<<endl;
        midterm=0;
        finalexamgrade=0;
        research=0;
        finalnumericgrage=0;
        science_midterm_percent=.40;
        science_finalexam_percet=.40;
        science_reseatch_percent=.20;
    }
    void calculate()
    {
        char response[256];
        string moregradetocalculate;
        cout<<"enter the midterm grade"<<endl;
        cin.getline(response,256);
        setmidterm(atoi(response));
        cout<<"enter the finalexamination grade";
        cin.getline(response,256);
        setfinalexamgrade(atoi(response));
        cout<<"enter the research grade"<<endl;
        cin.getline(response,256);
        setresearch(atoi(response));
        finalnumericgrage=(midterm*science_midterm_percent)+(research*science_reseatch_percent)+(finalexamgrade*science_finalexam_percet);
        if(finalnumericgrage>=90)
        finallettergrade='A';
        else
        if((finalnumericgrage>=80)&&(finalnumericgrage<90))
        finallettergrade='B';
        else
        if((finalnumericgrage>=70)&&(finalnumericgrage<80))
        finallettergrade='C';
        else
        if((finalnumericgrage>=60)&&(finalnumericgrage<70))
        finallettergrade='D';
        else
        if(finalnumericgrage<60)
        finallettergrade='F';
        cout<<"finalnumericgrade"<<finalnumericgrage<<endl;
        cout<<"finallettergrade"<<finallettergrade<<endl;
    }
};