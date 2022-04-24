#include <bits/stdc++.h>
using namespace std;

int l_sum(int A[], int n)
{
    int s_max=A[0],s_cur=A[0],in_max=A[0];
    for(int i=1;i<n;i++)
    {
        int a,b;
        a=s_cur+A[i];
        if(A[i]>s_cur)
        {
            s_cur=A[i];
            in_max=A[i];
        }
        else
        {
            s_cur=a;
        }
        if(s_cur>s_max)
        {
            s_max=s_cur;
        }
    }
    return s_max;
    
   
}

int main() {
	//int arr[9]={-2,1,-3,4,-1,2,1,-5,4};
	//cout<<l_sum(arr,9);
	int arr[5]={5,4,-1,7,8};
	cout<<l_sum(arr,5);
}