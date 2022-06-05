#include <bits/stdc++.h>
using namespace std;
int valid_par(string a)
{
    stack<int> s1;
    s1.push(a[0]);
    for(int i=1;i<a.length();i++)
    {
        if(s1.empty())
        {
            s1.push(a[i]);
            continue;
        }
        if(s1.top()==a[i])
        {
            s1.push(a[i]);
        }
        else
        {
           s1.pop(); 
        }
    }
    int s=s1.size();
    return s;
}

int main()
{
    string str="(()))";
    cout<<valid_par(str);
}