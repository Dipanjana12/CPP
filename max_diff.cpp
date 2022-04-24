#include <bits/stdc++.h>
using namespace std;

int max_diff(int A[], int n)
{
    int cur_min, max_dif;
    int i=0,j=1;
    cur_min=A[i];
    max_dif=(A[j]-A[i]);
    for(j=1;j<n;j++)
    {
        if((A[j]-cur_min)>max_dif)
        {
            max_dif=A[j]-cur_min;
        }
        if(A[j]<cur_min)
        {
            cur_min=A[j];
        }
    }
    return max_dif;
}

int main() {
	int arr[6]={2,3,8,-3,4,10};
	int s=6;
	cout<<max_diff(arr,s);
}