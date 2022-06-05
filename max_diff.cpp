#include <bits/stdc++.h>
using namespace std;
int curr,diff;
int max_dif(int arr[], int n)
{
  curr=arr[0];
  diff=0;
  for(int k=1;k<n;k++)
  {
      if((arr[k]-curr)<0)
      {
         curr=arr[k]; 
      }
      else
      {
          if((arr[k]-curr)>diff)
          {
              diff=arr[k]-curr;
          }
      }
  }
  return diff;
}
int main()
{
    int arr1[3]={10,20,30};
    cout<<max_dif(arr1,3);
}