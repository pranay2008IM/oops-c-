#include<iostream>
using namespace std;
class bank
{
    private:
    static float balance;
    float newbalance;
    float adjus;
    public:
    bank()
    {
        cout<<"bank constructor"<<endl;
    }
    ~bank()
    {
        cout<<"bank decostructo"<<endl;
    }
    public:
    void makedeposit()
    {
        cout<<"enter the amount"<<endl;
        cin>>adjus;
        newbalance=balance+adjus;
        cout<<"****smily**"<<endl;
        cout<<"old balance:::"<<balance<<endl;
        cout<<"adjustem amount is :::"<<adjus<<endl;
        cout<<"new balance is :::"<<newbalance<<endl;
        balance=newbalance;
    }
    void makewithdrawl()
    {
        cout<<"enter the withdrawl amount"<<endl;
        cin>>adjus;
        newbalance=balance-adjus;
        cout<<"***smily***"<<endl;
        cout<<"old balanceis:"<<balance<<endl;
        cout<<"adjustment balance is::"<<adjus<<endl;
        cout<<"new balaance::"<<newbalance<<endl;

        balance=newbalance;
    }
    void getbalacne()
    {
        cout<<"***smily***"<<endl;
        cout<<"current balance is :::"<<balance<<endl;
    }

};