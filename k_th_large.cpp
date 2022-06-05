#include <bits/stdc++.h>
using namespace std;
int k_th_large(int arr[],int k,int n)
{
    sort(arr,arr+n);
    return arr[k-1];
}
int main()
{
    int arr1[6]={7,10,4,3,20,15};
    cout<<k_th_large(arr1,3,6);
}