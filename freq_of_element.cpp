#include <bits/stdc++.h>
using namespace std;
vector<int> vect;
void freq_elem(int arr[],int n)
{
   int count=0,k=0;
   vect.push_back(arr[0]);
   for(int i=0;i<n;i++)
   {
       if(arr[i]==vect[k])
       {
           count++;
       }
       else
       {
           vect.push_back(count);
           vect.push_back(arr[i]);
           count=1;
           k=k+2;
       }
   }
   vect.push_back(count);
   for(int j=0;j<vect.size();j++)
   {
       cout<<vect[j]<<" ";
   }
}

int main()
{
    int arr1[6]={10,10,10,25,30,30};
    freq_elem(arr1,6);
    return 0;
}