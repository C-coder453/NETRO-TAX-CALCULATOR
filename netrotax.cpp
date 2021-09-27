
#include<iostream>

using namespace std;

float x;

void tax()
{
    int dep;
    cout<<"Enter amount of money!"<<endl;
    cin>>dep;
    int re = (dep - ((x/100) * dep));
    int tx = ((x/100) * dep);
    string curr;
    cout<<"What currency are you using?"<<endl;
    cin>>curr;
    cout<<"Your results are:- "<<endl<<endl;
    cout<<"The amount of money you will get after tax will be: "<<re<<" "<<curr<<endl;
    cout<<"Money gone in tax will be:                          "<<tx<<" "<<curr<<endl;
}

int main()
{
    cout<<"NETRO TAX CALCULATOR v3.0"
        <<endl
        <<"=========================="
        <<endl<<endl;
    cout<<"First tell the tax percentage (any number between 1 - 100)"<<endl;
    cin>>x;
    if ((x >= 1) && (x <= 100))
    {
        tax();
    } else
    {
        cout<<"Please enter the correct value and TRY AGAIN!"<<endl;
    }
    return 0;
}