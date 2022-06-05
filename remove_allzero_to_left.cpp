#include <bits/stdc++.h>
using namespace std;
int i,j=0,temp;
int *rem_zero(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
      if(arr[i]!=0)
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
      }
    }
    return arr;
}

int main()
{
    int arr[7]={0,9,0,8,0,9,20};
    int* ans;
    ans=rem_zero(arr,7);
    for(int i=0;i<7;i++)
    {
        cout<<ans[i]<<" ";
    }
}