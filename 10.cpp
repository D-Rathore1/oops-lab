#include<iostream>
using namespace std;
class bank
{
    private:
    string name;
    int acc_no;
    string acc_type;
    float balance;
  public:
  void details()
  {
    cout<<"Enter the Name: ";
    cin>>name;
    cout<<"Enter the Account Number: ";
    cin>>acc_no;
    cout<<"Enter the Account Type: ";
    cin>>acc_type;
    cout<<"Enter the Initial Balance: ";
    cin>>balance;
  }
  void deposite ()
  {
    float amount;
    cout <<"Enter the Amount: ";
    cin >> amount;
    balance += amount;
    cout <<"Amount Deposited: " << amount << "\nNew Balance: " << balance << endl;
  }
  void withdraw()
  {
    float amount;
    cout <<"Enter the Amount: ";
    cin >> amount;
    if(balance >= amount)
    {
      balance -= amount;
      cout <<"Amount Withdrawn: " << amount << "\nNew Balance: " << balance << endl;
    }
    else
    {
      cout <<"Insufficient Balance" << endl;
    }
  }
  void display ( )
  {
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance<<endl;
  }
};
int main()
{
    int n,a;
    cout <<"Enter the no. of accounts to create = ";
    cin >> n;
    bank b[n];
    for (int i=0; i<n ; i++)
    {
        b[i].details();
        cout<<"select 1 to deposite: "<<endl;
        cout<<"select 2 to withdraw: "<<endl;
        cout<<"select 3 to check balance: "<<endl;
        cout<<"select 4 to exit: "<<endl;
        cin>>a;
        while(a!=4)
        {
            
            switch(a)
           {
                case 1:
                b[i].deposite();
                cin>>a;
                break;
                case 2:
                b[i].withdraw();
                cin>>a;
                break;
                case 3:
                b[i].display();
                cin>>a;
                break;
                default:
                break;
            }
        }
    }
return 0;
}
// bank accounts.