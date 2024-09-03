#include<iostream>
#include<string>
#include "strudentbase.cpp"
#include "englishstudent.cpp"
#include "mathstudent.cpp"
#include "science.cpp"
int  whatkindofstudent();
char response[256];
int main()
{
    
    int lresponse;
    string moregradetocalculate;
    cout<<"do you want to calculate the grade"<<endl;
    cin>>moregradetocalculate;
    for(int i=0;i<moregradetocalculate.length();i++)
    {
        moregradetocalculate[i]=toupper(moregradetocalculate[i]);

    }
    while (moregradetocalculate=="YES")
    {
        lresponse=whatkindofstudent();
        switch (lresponse)
        {
        case 1:
        {
        english es;
            
            es.calculate();
            cout<<"midterm marks="<<es.getmidterm()<<endl;
            cout<<"final exam="<<es.getfinalexamgrade()<<endl;
            cout<<"presentation marks="<<es.getpresentaion()<<endl;
            cout<<"research marks="<<es.getresearch()<<endl;

        }
        break;
        case 2:
        {
        mathstudent mas;
        mas.calculate();
        }
        break;
        

        default:
            break;

        }
        cout<<"do you have another grade to calculate"<<endl;
        cin>>moregradetocalculate;
    for(int  i=0;i<moregradetocalculate.length();i++)
    {
        moregradetocalculate[i]=toupper(moregradetocalculate[i]);
    }


    }
    

}
int whatkindofstudent()
{
    cout<<"enter the student type"<<endl<<endl;
    cout<<"(1=English,2=Math,3=Science)"<<endl;
    int response;
    cin>>response;
    if(response==0)
    {
        cout<<"you must select the student type"<<endl;
        exit(1);
    }
    if((response<1)||(response>3))
    {
        cout<<"it is not a valid student type"<<endl;
        exit(2);
    }
    return response;
}