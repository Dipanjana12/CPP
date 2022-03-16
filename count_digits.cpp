#include <iostream>
using namespace std;

int count_digit(int n)
{   
    int count=0;
    int num=n/10;
    while(num!=0)
    {
        num=num/10;
        count++;
    }
    return count+1;
}

int main() {
	int num_of_digits=count_digit(12543);
	cout<<num_of_digits;
	
}