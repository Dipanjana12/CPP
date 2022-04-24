#include <iostream>
using namespace std;

void power_of_two(int n)
{
    if((n&(n-1))==0)
    {
        cout<<"yes";
    }
    else
     cout<<"No";
}
int main() {
	power_of_two(16);
	return 0;
}