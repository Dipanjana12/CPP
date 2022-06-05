#include <bits/stdc++.h>
using namespace std;
int suml=0,sumr=0;
bool equilibrium_point(int arr[],int n)
{
    int r=n-1;
    for(int i=0;i<n-1;i++)
    {
        suml=suml+arr[i];
    }
    for(int j=n-2;j>=0;j--)
    {
        suml=suml-arr[j];
        sumr=sumr+arr[r];
        //cout<<suml<<" "<<sumr;
        if(suml==sumr)
        {
            return true;
        }
        else
        {
            r--;
        }
    }
    return false;
}

int main()
{
    int arr1[6]={3,4,8,-9,20,6};
    bool a=equilibrium_point(arr1,6);
    /*int arr1[3]={4,2,-2};
    bool a=equilibrium_point(arr1,3);
    int arr1[3]={4,2,2};
    bool a=equilibrium_point(arr1,3);*/

    if(a)
    {
        cout<<"yes";
    }
    else
    {
        cout<<"no";
    }
}