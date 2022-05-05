#include <bits/stdc++.h>
using namespace std;

int cut_rope(int length,int a, int b, int c)
{
    int m=min(a,min(c,b));
    if(length==0)
    {
        return 0;
    }
    //if length is divisible by min
    if(length%m==0)
    {
        //cout<<"in2"<<endl;
        return 1+cut_rope(length-m,a,b,c);
    }
    else
    {
        //length is not divisible by minimum but (minimum+remainder) exists

        int i=length%m;
        i=i+m;
        //cout<<i<<endl;
        if(i==a||i==b||i==c)
        {
            if(i==a)
            {
               return 1+cut_rope(length-a,a,b,c);
            }
            if(i==b)
            {
               return 1+cut_rope(length-b,a,b,c);
            }
            if(i==c)
            {
                //cout<<"in"<<endl;
               return 1+cut_rope(length-c,a,b,c);
            }
        }
        else
        {
            //checking for second minimum and reducing the length
            //if a is not min
            if(a^m)
            {
                int d=min(a,max(b,c));
                //cout<<d<<endl;
                int x=length%d;
                x=x+d;
                //cout<<i<<endl;
                if(x==a||x==b||x==c)
                {
                    if(x==a)
                    {
                        
                       return 1+cut_rope(length-a,a,b,c);
                    }
                    if(x==b)
                    {
                       return 1+cut_rope(length-b,a,b,c);
                    }
                    if(x==c)
                    {
                        //cout<<"in"<<endl;
                       return 1+cut_rope(length-c,a,b,c);
                    }
                }
            }
            //if b is not min
            if(b^m)
            {
                int e=min(b,max(a,c));
                int z=length%e;
                z=z+e;
                //cout<<i<<endl;
                if(z==a||z==b||z==c)
                {
                    if(z==a)
                    {
                        
                       return 1+cut_rope(length-a,a,b,c);
                    }
                    if(z==b)
                    {
                       return 1+cut_rope(length-b,a,b,c);
                    }
                    if(z==c)
                    {
                        //cout<<"in"<<endl;
                       return 1+cut_rope(length-c,a,b,c);
                    }
                }
            }
            //if c is not min
            if(c^m)
            {
                int y=min(c,max(a,b));
                int q=length%y;
                q=q+y;
                //cout<<i<<endl;
                if(q==a||q==b||q==c)
                {
                    if(q==a)
                    {
                        
                       return 1+cut_rope(length-a,a,b,c);
                    }
                    if(q==b)
                    {
                       return 1+cut_rope(length-b,a,b,c);
                    }
                    if(q==c)
                    {
                        //cout<<"in"<<endl;
                       return 1+cut_rope(length-c,a,b,c);
                    }
                }
                
            }
            //if length is divisible by only max
            if(length%max(a,max(b,c))==0)
            {
                return 1;
            }
            else
            {
                return -1;
            }

            
        }

    }
}

int main()
{
    cout<<cut_rope(5,4,2,6);
    
}