#include <bits/stdc++.h>
using namespace std;
int max_sum,sum,init=0;
int max_sum_sliding_window(int arr[],int n,int k)
{
   for(int i=0;i<n;i++)
   {
     if(i>k-1)
     {
         sum=sum-arr[init];
         init++;
         sum=sum+arr[i];
         max_sum=max(max_sum,sum);
         
         
     }
     else
     {
         sum=sum+arr[i];
         max_sum=max(max_sum,sum);
     }
   }
   return max_sum;
}
int main()
{
    int arr1[6]={1,8,30,-5,20,7};
    cout<<sliding_window(arr1,6,3);
}