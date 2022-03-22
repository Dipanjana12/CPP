#include <bits/stdc++.h>
using namespace std;

int HCF(int a, int b)
{
    if(b==0)
        return a;
    else
    {
        return HCF(b,a%b);
    }
}
int LCM(int a, int b)
{
    if(a==0 || b==0)
    {
        return 0;
    }
    else
    {
        return ((a*b)/HCF(a,b));
    }
}
int main()
{
    cout<<LCM(32,48);
}