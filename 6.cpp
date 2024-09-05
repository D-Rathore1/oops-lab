#include<iostream>
using namespace std;
int main()
{
    char str[100],s;
    cin.getline(str, 100);
    cout<<"enter the special characater : ";
    cin>> s;
    for (int i=0; str[i] != '\0'; i++)
     {
      
        if (str[i]==' ')
        {

        }
        else if(str[i]==s)
        {
          for(int k=i;str[k] != '\0'; k++)
            {
            str[k]=str[k+1];
            }
        }
  
      }
  cout << str << endl;
return 0;
}
// remove the special characater.