#include<iostream>
using namespace std;
class hotel
{
    private :
    int rno;
    string name;
    int tariff;
    int nod;
    void calc(int nod,int tariff)
    {
        int t;
        float TA;
        t=nod*tariff;
        if (t>1000)
        {
            TA=1.05*t;
        }
        else 
        {
            TA=t;
        }
        cout << "Total amount = " << TA << endl;
    }
    public:
    void checkin()
    {
        cout << "Enter the room no. = ";
        cin>>rno;
        cout<< "Enter the name of person = ";
        cin>>name;
        cout<< "Enter the tariff = ";
        cin>>tariff;
        cout<<"Enter the no. of days  = ";
        cin>>nod;
    }
    void checkout()
    {
        cout << "Room no. = "<< rno <<endl;
        cout << "Name = "<< name <<endl;
        cout << "Tariff = "<< tariff <<endl;
        cout << "No. of days = "<< nod << endl;
        calc(nod,tariff);  
    }
};
int main()
{
    int n;
    cout<<"Enter the no. of person = ";
    cin>>n;
    hotel h[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the details of "<<i+1<<" person"<<endl;
        h[i].checkin();
    }
    for (int i=0;i<n;i++)
    {
        cout<<"Following are the details of "<<i+1<<" person"<<endl;
        h[i].checkout();
    }
return 0;
}
//class hotel