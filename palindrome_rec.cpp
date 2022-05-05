#include <bits/stdc++.h>
using namespace std;

bool pal(string s, int start, int end)
{
    if(start>=end)
    {
        return true;
    }
    
    if(s[start]==s[end])
    {
      return pal(s,start+1,end-1);
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,l;
    string str="abcddba";
    l=str.length();
    n=pal(str,0,l-1);
    cout<<n;
}
