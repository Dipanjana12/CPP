#include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b)  //iterative function
{
    
    int rem;
    if(a==0 || b==0)
    {
        return 0;
    }
    if(a==b)
    {
        return a;
    }
    else
    {
        while(a%b!=0)
        {
            rem=a%b;
            a=b;
            b=rem;
        }
        return b;
    }
    
}

int GCD_naive(int a,int b) // iterative function
{
    if(a==0 || b==0)
    {
        return 0;
    }
    if(a==b)
    {
        return a;
    }
    else
    {
        int i=min(a,b);
         for(int i;i>1;i--)
        {
            if(a%i==0 && b%i==0)
            {
                return i;
            }
        }
    
        
    }
}

int GCD_rec(int a, int b)  // recursive function
{
    if(a==0||b==0)
    {
        return 0;
    }
    if(a-b==0)
    {
        return a;
    }
    else 
    if(a>b)
    {
        return GCD_rec(a-b,b);
    }
    else
    {
        return GCD_rec(b-a,a);
    }
}
int main()
{
    //cout<<GCD_rec(22,0);
    //cout<<GCD(22,121);
    cout<<GCD_naive(22,121);
}