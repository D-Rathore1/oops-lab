#include<iostream>
using namespace std;
class eb
{
    private:
    string name;
    int unit;
    public:
    void setname(string s)
    {
        cin>>s;
        name =s;
    }
    string getname()
    {
        return name;
    }
    void setunit(int n)
    {
        cin>> n;
        unit = n;
    }
    int getunit()
    {
        return unit;
    }
};
void bill(int unit)
{
    int b;
    float tb;
    cout<< "bill = ";
    if (unit<=100)
    {
        b=(unit*0.6)+50;
        cout<< b <<endl;
    }
    else if(unit > 100 && unit <=300)
    {
        unit=unit-100;
        b=60+(unit*0.8)+50;
        cout<< b <<endl;
    }
    else if(unit>300)
    {
        unit=unit-200;
        b=220+(unit*0.9)+50;
        cout << b << endl;
    }
    cout<<"total bill = ";
    if(b>300)
    {
        tb=b+((b*15)/100);
        cout<< tb <<endl;
    }
    else
    {
        tb=b;
        cout<< tb <<endl;
    }
}
int main()
{
   float unit;
   int n1,n2;
   string a;
   eb a1,a2;
   a1.setname(a);
   a2.setname(a);
   a1.setunit(n1);
   a2.setunit(n2);
  cout<<  a1.getname()<< endl;
  cout<<  a1.getunit()<< endl;
  cout<<  a2.getname()<< endl;
  cout<<  a2.getunit()<< endl;
  cout<< "for "<<a1.getname()<<endl ;
  unit=a1.getunit();
  bill(unit);
  cout<< "for "<<a2.getname()<<endl;
  unit=a2.getunit();
  bill(unit);

return 0;
}
// electricity bill