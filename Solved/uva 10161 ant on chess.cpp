#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int i,k,n,s,x,y;
    while(cin>>n)
    {
        if(n==0)
            break;
        s=sqrt(n);
        if(n==s*s)
        {
            if(s%2==1)
            {
                x=1;
                y=s;
            }
            else
            {
                x=s;
                y=1;
            }
        }
        else
        {
            if(s%2==0)
            {
                if(n<=s*s+s+1)
                {
                    x=s+1;
                    y=n-s*s;
                }
                else
                {
                    x=(s+1)*(s+1)-n+1;
                    y=s+1;
                }
            }
            else
            {

                if(n<=s*s+s+1)
                {
                    y=s+1;
                    x=n-s*s;
                }
                else
                {
                    y=(s+1)*(s+1)-n+1;
                    x=s+1;
                }

            }
        }
         cout<<x<<" "<<y<<endl;;
    }
    return 0;
}
