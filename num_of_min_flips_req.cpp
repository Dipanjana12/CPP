#include <bits/stdc++.h>
using namespace std;
int flag1,flag0;
void min_flips(int arr[],int n)
{
    int prev=arr[0];
    for(int i=0;i<n;i++)
    {
        
        if(prev!=arr[i])
        {
            if(prev==0)
            {
                flag0++;
            }
            else
            {
                flag1++;
            }
        }
        prev=arr[i];
            
    }
    if(arr[n-1]==0)
    {
        flag0++;
    }
    else
    {
        flag1++;
    }
    
  cout<<min(flag1,flag0);
}

int main()
{
    int arr1[9]={1,0,0,0,1,1,0,1,1};
    min_flips(arr1,9);
    return 0;
}