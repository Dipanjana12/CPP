#include <bits/stdc++.h>
using namespace std;

bool find_palindrome(long int n)
{
    long int n1=n;
    int r;
    long int rev=0;
    while(n1!=0)
    {
        r=n1%10;
        n1=n1/10;
        rev=(rev*10)+r;
        
    }

    if(n==rev)
    {
        return true;;
    }
    else
    {
        return false;
    }
}
int main() {
	if(find_palindrome(12321)==true)
	{
	    cout<<"yes";
	}
	else
	{
	    cout<<"no";
	}
	return 0;
}