#include <bits/stdc++.h>
using namespace std;

void two_odd_occ(int arr[], int N)
{
    int a=0; int res1=0; int res2=0; int sum;
    for(int i=0;i<N;i++)
    {
        a=a^arr[i];
    }
    //cout<<a<<endl;
    sum=a&(~(a-1));
    //cout<<sum<<endl;
    for(int i=0;i<N;i++)
    {
        if((sum&arr[i])!=0)
        {
            res1=res1^arr[i];
        }
        else
        {
            res2=res2^arr[i];
        }
    }
    cout<<res1<<" "<<res2;
}
int main()
{
   int A[10]={3,4,3,4,5,4,4,6,7,7};
   two_odd_occ(A,10);
   return 0;
   
}