#include <bits/stdc++.h>
using namespace std;
void rem_dup(int arr[],int n)
{
    vector<int> arr1;
    //arr1.push_back(arr[0]);
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            arr1.push_back(arr[i]);
        }
    }
    for(int j=0;j<arr1.size();j++)
    {
        cout<<arr1[j]<<" ";
    }
}

int main()
{
    int arr1[]={30,30,20,20,20,5,6,6,7,7};
    rem_dup(arr1,10);
    return 0;
}