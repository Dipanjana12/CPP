#include <bits/stdc++.h>
using namespace std;

void del(int arr[],int n, int x)
{
   for(int i=0;i<n;i++)
   {
       if(arr[i]==x)
       {
           for(int j=i;j<n;j++)
           {
               arr[j]=arr[j+1];
           }
           arr[n-1]=0;
           break;
       }
       
   }
   for(int k=0;k<n;k++)
   {
       cout<<arr[k]<<" ";
   }
}

int main()
{
    int arr1[5]={10,3,4,2,9};
    del(arr1,5,3);
    return 0;
}