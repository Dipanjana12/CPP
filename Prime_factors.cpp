#include <bits/stdc++.h>
using namespace std;

vector <int> prime_factors(int n)
{
    vector <int> arr;
    for(int i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            arr.push_back(i);
            n=n/i;
            i=1;
            
        }
    }
    
    return arr;
}
vector <int> prime_factors_modified(int n)
{
    vector <int> arr;
    for(int i=2;i<=sqrt(n);i++)
    {
        while(n%i==0)
        {
            arr.push_back(i);
            n=n/i;
            
        }
    }
    if(n>1)
    {
        arr.push_back(n);
    }
    
    return arr;
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr;
    //arr=prime_factors(n);
    arr=prime_factors_modified(n);
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}