#include <bits/stdc++.h>
using namespace std;

bool is_prime(int a)
{
    bool flag=true;
    for(int i=5;i<=sqrt(a);i=i+6)
    {
        if(a%i==0)
        {
            flag=false;
        }
        
    }
    return flag;
}

vector <int> all_divisors(int n)
{
   vector <int> arr;
   vector <int> arr1;
   for(int i=0; i<=n;i++)
   {
       arr.push_back(1);
   }
   for(int i=4;i<=n;i++)
   {
       if(i%2==0||i%3==0)
       {
           arr[i]=0;
       }
   }
   for(int i=5;i<=n;i=i+2)
   {
       if(arr[i]!=0)
       {
           if(is_prime(i))
           {
             arr[i]=1;  
           }
           else
           {
               arr[i]=0;
           }
       }
   }
   for(int i=2;i<=n;i++)
   {
       if(arr[i]==1)
       {
           arr1.push_back(i);
       }
   }
    
    return arr1;
   
}
int main()
{
    int n;
    cin>>n;
    vector<int> arr_org;
    //arr=prime_factors(n);
    arr_org=all_divisors(n);
    for(int i=0;i<arr_org.size();i++)
    {
        cout<<arr_org[i]<<" ";
    }

}