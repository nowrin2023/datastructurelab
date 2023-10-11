#include<iostream>
using namespace std;
struct BankAccount
{
   string accountHoldername ;
   int  accountNumber;
   double accountBalance;

};
int main ()
{
    BankAccount acc;

    cout<<"Enter Account Number      :"<<endl;
    cin>>acc.accountNumber;
    cout<<"Enter the holder name     :"<<endl;
    cin>>acc.accountHoldername;
    cout<<"Enter the initial balance :"<<endl;
    cin>>acc.accountBalance;
    cout<<"___ACCOUNT CREATED__ "<<endl;
    cout<<"ACCOUNT NUM    :"<<acc.accountNumber<<endl;
    cout<<"ACCOUNT HOLDER :"<<acc.accountHoldername<<endl;
    cout<<"ACCOUNT BALNACE:"<<acc.accountBalance<<endl;
    double depositAmount;
    cout<<"Enter the amount you want to deposit: ";
    cin>>depositAmount;
    acc.accountBalance+=depositAmount;
    cout<<"YOUR DEPOSIT SUCCESSFUL!!"<<endl;
    cout<<"NEW BALANCE IS :"<<acc.accountBalance<<endl;
    cout<<endl;
    double withdrawAmount;
    cout<<"Enter the amount you want to withdraw :";
    cin>>withdrawAmount;
     if(withdrawAmount<=acc.accountBalance)
    {
        acc.accountBalance-=withdrawAmount;
        cout<<"Withdraw successful your New balance is:"<<acc.accountBalance<<endl;

     }
     else{
        cout<<"Withdraw is not possible!!!"<<endl;
     }

}
