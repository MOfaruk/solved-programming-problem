#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned __int64 i,d,k,l,u,mx,m,mx_num,test;
    cin>>test;
    while(test--)
    {
        cin>>l>>u;
        mx=0;
        for(i=l;i<=u;i++)
        {
            m=2;
            for(d=2;d*d<=i;d++)
            {
                if(i%d==0)
                 {
                     m=m+2;
                     if(d*d==i)
                        m--;
                 }
            }
            if(m>mx)
            {
                mx=m;
                mx_num=i;
            }
        }
        cout<<"Between "<<l<<" and "<<u<<", "<<mx_num<<" has a maximum of "<<mx<<" divisors."<<endl;
    }
    return 0;
}
