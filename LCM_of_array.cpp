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

long int LCM(vector <int> arr)
{
    long int ans;
    ans=arr[0];
    for(int i=1;i<arr.size();i++)
    {
        /*hcf=HCF(arr[i],arr[i+1]);
        lcm=(arr[i]*arr[i+1])/hcf;
        arr[i+1]=lcm;*/
        
        ans= ((ans*arr[i])/HCF(ans,arr[i]));
        
    }
    
    return ans;
    
    
}
int main()
{
    long int ans;
    vector<int> arr;
    
    arr.push_back(10);
    arr.push_back(15);
    arr.push_back(20);
    arr.push_back(7);
    //arr.push_back(19);
    //arr.push_back(23);
    //arr.push_back(25);
    
    ans=LCM(arr);
    cout<<ans;
    
}