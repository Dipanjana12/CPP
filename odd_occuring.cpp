#include <iostream>
using namespace std;

int odd_occuring(int arr[], int N)
{
    int odd=0;
    for(int i=0;i<N;i++)
    {
        odd=odd^arr[i];
    }
    return odd;
}

int main()
{
   int A[9]={2,2,3,4,4,4,4,5,5};
   cout<<odd_occuring(A,9);
}