#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*factorial(n-1);
}
int fact_loop(int n)
{
    int a=1;
    while(n>1)
    {
        a=a*n;
        n--;
        
    }
    return a;
}
int main()
{
    cout<<factorial(5);
    //cout<<fact_loop(5);
}