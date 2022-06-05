#include <bits/stdc++.h>
using namespace std;
int current;
void cur_leader(int arr1[],int n)
{
    current=arr1[n-1];
    cout<<current<<" ";
    for(int k=n-2;k>=0;k--)
    {
        if(arr1[k]>current)
        {
            current=arr1[k];
            cout<<current<<" ";
        }
        
    }

}

int main()
{
    int arr[7]={7,10,4,10,6,5,2};
    cur_leader(arr,7);
    return 0;
    
}