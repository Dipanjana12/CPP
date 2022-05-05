#include <iostream>
using namespace std;

void sub_set(string str, string cur, int i)
{
    if(i==str.length())
    {
        cout<<cur<<endl;
        return;
    }
    sub_set(str,cur,i+1);
    sub_set(str,cur+str[i],i+1);
}

int main() {
	sub_set("ABC","",0);
	return 0;
}