#include <bits/stdc++.h>
using namespace std;
int* rev(int arr2[],int i, int j)
{
    for(int k=i;k<=j;k++)
    {
        swap(arr2[k],arr2[j]);
        j--;
    }
    return arr2;
}
int *left_rot_d(int arr[],int n,int d)
{
    int *arr1;
    rev(arr,0,d-1);
    rev(arr,d,n-1);
    arr1=rev(arr,0,n-1);
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