#include <bits/stdc++.h>
using namespace std;

int sum(int n)
{
    if(n/10==0)
    {
        return n%10;
    }
    
    return (n%10)+sum(n/10);
}

int main()
{
    cout<<sum(432);
}