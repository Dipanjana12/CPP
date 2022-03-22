#include <bits/stdc++.h>
using namespace std;

bool chkprime(int a)
{
    if(a==1)
        return false;
    bool flag=true;
    
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=false;
            break;
        }
    }
    
    return flag;
}

vector <int> check_prime(int l, int r)
{
    //write your code here
    vector <int> arr;
   
    bool flag;
    int cnt=0;
    for(int i=l;i<=r;i++)
    {
        flag=chkprime(i);
        if(flag)
        {
            cnt++;
            arr.push_back(i);
        }
        
    }
    arr.push_back(cnt);
    return arr;
}
int main()
{
    int l,r;
    cin>>l>>r;
    vector<int> arr;
    arr=check_prime(l,r);
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}