#include <bits/stdc++.h>
using namespace std;
int i;
int j;
int temp;
void rev_arr(int arr[],int n)
{
    i=0;
    j=(n-1);
    while(i<j)
    {
       temp=arr[j];
       arr[j]=arr[i];
       arr[i]=temp;
       i++;
       j--;
    }
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<" ";
    }
}

int main()
{
    int arr1[]={30,20,5};
    rev_arr(arr1,3);
    return 0;
}