#include<iostream>
#include"1.h"
using namespace std;
int main()
{
    int x,y;
    cin >> x;
    cin >> y;
    cout<<"SUM=" << sum(x,y)<< endl;
    cout<<"SUB=" << sub(x,y)<< endl;
    cout<<"MUL=" << mul(x,y)<< endl;
    cout<<"DVD=" << dvd(x,y);
 return 0;
}