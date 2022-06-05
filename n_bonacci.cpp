#include <bits/stdc++.h>
using namespace std;
vector<int> vect;
int init=0;
int n_bonacci(int n, int M)
{
   for(int i=1;i<=n;i++)
   {
       if(i<n)
       {
           vect.push_back(0);
       }
       if(i==n)
       {
           vect.push_back(1);
       }
   }
    for(int j=0;j<M;j++)
    {
        if(j<=n)
        {
          sum=sum+vect[j];
          vect.push_back(sum);
        }
        if(j>n)
        {
            sum=sum-vect[init];
            
        }
    }
}
int main()
{
    n_bonacci(3,8);
}