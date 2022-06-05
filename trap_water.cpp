#include <bits/stdc++.h>
using namespace std;
int l,h;
int trap_water(int arr[],int n)
{
    l=arr[0];
    h=arr[n-1];
    int diff,trap=0;
    int lable=min(l,h);
    for(int j=1;j<n-1;j++)
    {
        diff=abs(lable-arr[j]);
        trap=trap+diff;
    }
    return trap;
}

int main()
{
    int arr1[5]={3,0,1,2,5};
    cout<<trap_water(arr1,5);
}