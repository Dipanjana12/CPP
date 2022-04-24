#include <bits/stdc++.h>
using namespace std;

void k_bit(int n, int k)
{
    k=(1<<(k-1));
    if((n&k)!=0)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;;
}

void k_bit_rgt(int n, int k)
{
    k=(n>>(k-1));
    if((1&k)==1)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;
}
void k_bit_rgt_32(int n, int k)
{
    int r;
    r=k-1;
    r=64-r;
    k=(64>>r);
    if((n&k)==1)
    {
        cout<<"yes"<<endl;
    }
    else
    cout<<"no"<<endl;
}


int main() {
	k_bit(5,3);
	k_bit_rgt(5,3);
	k_bit_oth(5,3);
	return 0;
}