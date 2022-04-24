#include <bits/stdc++.h>
using namespace std;

void power_set(char str[])
{
    int a=str.size();
    int p=pow(2,a);
    for(int i=0;i<p;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<str[j];
        }
        cout<<"\n";
    }
}
int main()
{
    char A[]="abc";
    power_set(A);
   return 0;
   
}