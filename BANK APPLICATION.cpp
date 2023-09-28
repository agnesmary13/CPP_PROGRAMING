#include <iostream>
using namespace std;
class Bank{
private:
    int Balance;
    public:
    int Accountno;
    int Amount;
    int W;


public:

    Bank(int openingBalance)
    {
     Balance=openingBalance;
    }
void Deposit()
{
    cout<<"Enter the Account no:";
    cin>>Accountno;
    cout<<"Enter the amount to deposit:";
    cin>>Amount;
    Balance=Amount+Balance;

}
void Withdrawal()
{
    cout<<"Enter the withdrawl amount:";
    cin>>W;
    if(W>Balance){
        cout<<"Insufficient balance.....unable to withdraw";
    }
    else{
        cout<<"Withdrawal Successful.....Available balance="<<Balance-W;
    }
    }
};

int main()
{
    int openingBalance;
    cout<<"Enter the  OpeningBalance:";
    cin>>openingBalance;
    Bank obj(openingBalance);

    obj.Deposit();
    obj.Withdrawal();
    return 0;


}
