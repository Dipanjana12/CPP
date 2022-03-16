#include <bits/stdc++.h>
using namespace std;

void find_root(float a, float b, float c)
{
    float x1,x2;
    float d,k;
    k=pow(b,2);
    d=k-(4*a*c);
    float r1=sqrt(d);
    x1=((-1*b)+r1)/(2*a);
    x2=((-1*b)-r1)/(2*a);
    cout<<x1<<" "<<x2;
}

int main() {
	find_root(1,-7,5);
	
	return 0;
}