#include <bits/stdc++.h>
using namespace std;

int k_sum(int A[], int n, int k)
{
    int a=0,b=0,s_max=0,s_cur=0;
    for(int i=0;i<n;i++)
    {
        if(b!=k)
        {
            s_max=s_max+A[i];
            s_cur=s_cur+A[i];
            b++;
        }
        else
        {
            s_cur=s_cur-A[a];
            s_cur=s_cur+A[i];
            if(s_cur>s_max)
            {
                s_max=s_cur;
            }
            a++;
        }
    }
        
    return s_max;
    
   
}

int main() {
	int arr[9]={1,4,2,10,23,3,1,0,20};
	int k=4;
	cout<<k_sum(arr,9,k);
	//int arr[4]={100,200,300};
	//cout<<l_sum(arr,5);
}