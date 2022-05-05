#include <iostream>
using namespace std;

int cut_rope(int length,int a, int b, int c)
{
    if(length==0)
    {
        return 0;
    }
    if(length<0)
    {
        return -99;
    }
    return max(1+cut_rope(length-a,a,b,c),max(1+cut_rope(length-b,a,b,c),1+cut_rope(length-c,a,b,c)));
    
}

int main()
{
    int n;
    n=cut_rope(5,4,1,6);
    if(n<0)
    {
        n=-1;
    }
    cout<<n;
}