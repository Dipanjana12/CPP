#include <iostream>
using namespace std;

int missing_number(int arr[5], int range)
{
    int num=0;
    int chk;
    for(int i=0;i<5;i++)
    {
        num=num^arr[i];
    }
    for(int i=0;i<=range;i++)
    {
      chk=chk^i;  
    }
    num=num^chk;
    return num;
}

int main()
{
   int A[5]={1,2,3,5,6};
   cout<<missing_number(A,6);
}