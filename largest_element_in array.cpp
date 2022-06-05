#include <bits/stdc++.h>
using namespace std;

int a;
int large(int arr[],int n)
{
   for(int i=0;i<n;i++)
   {
       if(arr[i]>=arr[i+1])
       {
         a=arr[i+1];
         arr[i+1]=arr[i];
         arr[i]=a;
       }
       
   }
  return arr[n-1];
}

int main()
{
    int arr1[5]={3,10,4,2,9};
    cout<<large(arr1,5);
}