#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int n,o=0,z=0;
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>> a[i] ;
    }
    for (int j=0;j<n;j++)
    {
        if (a[j]==0)
        {
            z++;
        }
        else 
        {
            o++;
        }
    }
    cout << o<< endl;
    cout << z<< endl;
    for(int i=0;i<z;i++)
    {
        a[i]=0;
    }
    for (int j=z;j<n;j++)
    {
        a[j]=1;
    }
    for (int k=0;k<n;k++)
    {
        cout << a[k];
    }

    return 0;
}
// seperate of 0's and 1's 