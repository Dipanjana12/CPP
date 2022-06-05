#include <bits/stdc++.h>
using namespace std;
int j;
int arr1[5];
int *left_rot_d(int arr[],int n,int d)
{
    
    for(int i=0;i<n;i++)
    {
        int res;
        res=(i%n)-d;
      if(res<0)
      {
        j=n-abs(res);
        arr1[j]=arr[i];
      }
      else
      {
          arr1[res]=arr[i];
      }
    }
    return arr1;
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int* ans;
    ans=left_rot_d(arr,5,2);
    for(int i=0;i<5;i++)
    {
        cout<<ans[i]<<" ";
    }
}