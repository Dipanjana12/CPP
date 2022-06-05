#include <bits/stdc++.h>
using namespace std;
char x;
int main()
{
string s="aaaabbcca";
x=s[0];
int count=0;
string vect="";
int n=s.length();
for(int i=0;i<=n;i++)
{
    if(x==s[i])
    {
        count++;
        
    }
    else
    {
        vect+=count+'0';
        vect+=x;
        x=s[i];
        count=1;
    }
}
cout<<vect;

return 0;
}