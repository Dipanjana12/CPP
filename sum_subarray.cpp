#include <bits/stdc++.h>
using namespace std;
int sum=0;
bool given_sum_subarray(int arr[],int n, int k)
{
    int init=0;
    for(int i=0;i<n;i++)
    {
        if(sum<k)
      {
      sum=sum+arr[i];
      //cout<<sum<<" ";
      }
      if(sum>k)
      {
        sum=sum-arr[init];
        init++;
        //cout<<sum<<" ";
      }
      if(sum==k)
      {
          return true;
      }
    }
    return false;
}
int main()
{
    int arr1[7]={1,4,0,0,3,10,5};
    bool a= given_sum_subarray(arr1,7,7);
    if(a)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}