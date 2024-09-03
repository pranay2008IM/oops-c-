#include<iostream>
#include<string>
#include "strudentbase.cpp"
using namespace std;
class english:public student
{
    private:
    float english_final_percetnae;
    float english_reseach_percetn;
    float english_presentation_percetn;
    float english_midterm_percetnrage;

    public:
    english()
    {
        cout<<"this is english studentconstructor"<<endl;
        english_final_percetnae=.25;
        english_reseach_percetn=.30;
        english_presentation_percetn=.20;
        english_midterm_percetnrage=.25;

    }
    void calculate()
    {
        char response[256];
        string moregradetocalculate;
        cout<<"enter the midterm grade"<<endl;
        cin.getline(response,256);
        setmidterm(atoi(response));
        cout<<"enter the final exam grade"<<endl;
        cin.getline(response,256);
        setfinalexamgrade(atoi(response));
        cout<<"enter the research grade"<<endl;
        cin.getline(response,256);
        setresearch(atoi(response));
        cout<<"enter the presentation grade"<<endl;
        cin.getline(response,256);
        setpresentation(atoi(response));
        finalnumericgrage=(midterm*english_midterm_percetnrage)+(finalexamgrade*english_final_percetnae)+(research*english_reseach_percetn)+(presentation*english_presentation_percetn);
        if(finalnumericgrage>=93)
        finallettergrade='A';
        else
        if((finalnumericgrage>=85)&&(finalnumericgrage<93))
        finallettergrade='B';
        else
        if((finalnumericgrage>=78)&&(finalnumericgrage<85))
        finallettergrade='C';
        else
        if((finalnumericgrage>=70)&&(finalnumericgrage<78))
        finallettergrade='D';
        else
        if(finalnumericgrage<70)
        finallettergrade='F';


    }


};