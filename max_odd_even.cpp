#include <bits/stdc++.h>
using namespace std;
int flag,mx_len,cur_len;
int max_odd_even(int arr[],int n)
{
    if(arr[0]%2==0)
      {
          flag=0;
      }
      else
      {
          flag=1;
      }
      cur_len=1;
      mx_len=1;
  for(int i=1;i<n;i++)
  {
    if(arr[i]%2==0)
    {
        if(flag==0)
        {
            mx_len=cur_len;
            cur_len=1;
        }
        else
        {
            flag=0;
            cur_len++;
        }
    }
    else
    {
        if(flag==1)
        {
            mx_len=cur_len;
            cur_len=1;
        }
        else
        {
            flag=1;
            cur_len++;
        }
        
    }
      
  }
  mx_len=max(mx_len,cur_len);
  return mx_len;
}
int main()
{
    int arr[6]={5,10,20,6,3,8};
    cout<<max_odd_even(arr,6);
}