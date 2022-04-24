#include <iostream>
using namespace std;

int count_set(int n)
{
    int res=0;
    while(n>0)
    {
        n=(n&(n-1));
        res++;
        
    }
    return res;
}

int main() {
	cout<<count_set(40);
	return 0;
}