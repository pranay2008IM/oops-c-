#include "banck.cpp"
using namespace std;
float bank::balance;
int main()
{

    int input;
    int choice;
    cout<<"enter the choice"<<endl;
    cin>>input;
    while(input==1)
    {
    cout<<"enter the choice(1.balace 2.makewithdrawl 3.to deposit)"<<endl;
    cin>>choice;
    if (choice==1)
    {
            bank objcect;
            objcect.getbalacne();
    }
    if(choice==2)
    {
        bank objcect;
        objcect.makewithdrawl();
    }
    if(choice==3)
    {

        
        bank objcect;
        objcect.makedeposit();
    }
    cout<<"enter 1 to continue"<<endl;
    cin>>input;
    }
    cout<<"thank you for chhoising the smily bank"<<endl;
}