#include <bits/stdc++.h>
using namespace std;

void two_odd_occ(int arr[], int N)
{
    vector<int> arr_n;
    int a;
    int cnt=0;
    
    sort(arr,arr+N);
    /*for(int i=0;i<N;i++)
    {
        cout<<arr[i]<<" ";
    }*/
    a=arr[0];
    //cout<<a;
    for(int j=0;j<N;j++)
    { 
        
        if(a==arr[j])
        {
            cnt++;
        }
        else
        {
            if(cnt%2==1)
            {
              arr_n.push_back(a);  
            }
            a=arr[j];
            cnt=1;
        }
        
        
    }
    
    for(int i=0;i<arr_n.size();i++)
    {
       cout<<arr_n[i]<<" "; 
    }

}

int main()
{
   int A[8]={12,17,12,80,80,3,3,11};
   two_odd_occ(A,8);
   return 0;
   
}