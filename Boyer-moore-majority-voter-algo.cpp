#include <bits/stdc++.h>
using namespace std;
int count1,count2,res;
bool find_majority(int arr[],int n)
{
    res=arr[0];
    count1++;
    for(int i=1;i<n;i++)
    {
        if(count1==0)
      {
          res=arr[i];
          count1=1;
      }
      if(arr[i]==res)
      {
          count1++;
      }
      else
      {
          count1--;
      }
      
    }
    for(int j=0;j<n;j++)
    {
        if(arr[j]==res)
        {
            count2++;
        }
    }
    if(count2>n/2)
    {
        return true;
    }
}
int main()
{
    int arr1[7]={8,8,6,6,2,4,2};
    if(find_majority(arr1,7))
    {
        cout<<res;
    }
    else
    {
        cout<<"no";
    }
}