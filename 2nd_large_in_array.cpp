#include <bits/stdc++.h>
using namespace std;

int l1,l2,pos;
int sec_large(int arr[],int n)
{
    l1=max(arr[0],arr[1]);
    l2=min(arr[0],arr[1]);
    if(arr[0]==l2)
    {
        pos=0;
    }
    else
        pos=1;
   for(int i=2;i<n;i++)
   {
       if(arr[i]>l1)
       {
         l2=l1;
         l1=arr[i];
       }
       else
       {
           if(arr[i]>l2)
           {
               l2=arr[i];
               pos=i;
           }
       }
       
   }
  return pos;
}

int main()
{
    int arr1[5]={3,10,9,2,4};
    cout<<sec_large(arr1,5);
}