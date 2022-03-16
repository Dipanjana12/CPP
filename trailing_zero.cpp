#include <bits/stdc++.h>
using namespace std;
int trail_zero(int fact)
{
    int num=0;
    while(fact!=0)
    {
        fact=fact/5;
        num=num+fact;
        
    }
    return num;
}
int main()
{
    cout<<trail_zero(25);
}