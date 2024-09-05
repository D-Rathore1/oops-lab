#include<iostream>
using namespace std;
class student
{
    private :
    int id;
    string name; 
    int a[5];
    int cls;
    
    int total(int a[])
    {
        int sum=0;
        for (int i=0;i<5;i++)
        {
            sum=(sum+a[i]);
        }
     //   cout<<"Total marks = "<<sum<<endl;
      return sum;
    }
    public:
    void seta()
    {
        cout<<"Enter the marks = ";
        for (int i=0;i<5;i++)
        {
            cin>>a[i];
        }
    }
    int totalscore( )
    {
        int T;
      T= total (a);
      return T;
    }
};
int main()
{
    int n,c=0;
    cout<<"Enter the no. of student = ";
    cin>>n;
    student s[n];
    for (int i=0;i<n;i++)
    {
        cout<<"Enter the details of "<<i+1<< " student : "<<endl;
        // s[i].setid();
        // s[i].setname();
        // s[i].setcls();
        s[i].seta();
        s[i].totalscore();
    }
    for (int i=1;i<n;i++)
    {
        if (s[0].totalscore() < s[i+1].totalscore())//+
      {
        c++;
      }
    }
    cout<<"Student with highest score : "<<c<<endl;
    return 0;
}
// student percentage


