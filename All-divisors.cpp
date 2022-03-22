#include <bits/stdc++.h>
using namespace std;

vector <int> all_divisors(int n)
{
    vector <int> arr;
    int i,k=0;
    for(i=1;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            arr.push_back(i);
        }
    }
    
    for(;i>=1;i--)
    {
        if(n%i==0)
        {
            k=n/i;
            arr.push_back(k);
        }
    }
    
    return arr;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    //arr=prime_factors(n);
    arr=all_divisors(n);
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}