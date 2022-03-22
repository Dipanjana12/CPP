#include <bits/stdc++.h>
using namespace std;

int prime(int a)
{
    bool flag=true;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            
            //flag=false;
            //break;
            return i;
        }
    }
    return 0;
    /*if(flag)
    {
        return 1;
    }
    else
    {
        return 0;
    }*/
}
int main()
{
    cout<<prime(2);
    /*if(prime(1729))
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }*/
}