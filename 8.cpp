#include<iostream>
using namespace std;
class student
{
    private :
    int id;
    string name; 
    int a[5];
    int cls;
    
    void percentage(int a[])
    {
        int sum=0;
        float per;
        for (int i=0;i<5;i++)
        {
            sum=(sum+a[i]);
           // cout <<"checking ..."<<endl;
            
        }
        //cout <<sum <<endl;
        per=(sum*100)/500;
        cout<<"Percentage = "<<per<<endl;
    }
    public:
    void setid()
    {
        cout<<"Enter the student id = ";
        cin>>id;
    }
    void setname()
    {
        cout<<"Enter the student name = ";
        cin>>name;
    }
    void getid()
    {
        cout<<id<<endl;
    }
    void getname()
    {
        cout<<name<<endl;
    }
    void setcls()
    {
        cout<<"Enter the class = ";
        cin>>cls;
    }
    void getcls()
    {
        cout<<cls<<endl;
    }
    void seta()
    {
        cout<<"Enter the marks = ";
        for (int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    void percent( )
    {
        percentage (a); 
    }
};
int main()
{
    int n;
    cout<<"Enter the no. of student = ";
    cin>>n;
    student s[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the details of "<<i+1<< " student : "<<endl;
        s[i].setid();
        s[i].setname();
        s[i].setcls();
        s[i].seta();
        s[i].percent();
    }

}