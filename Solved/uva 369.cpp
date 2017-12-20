#include<iostream>
using namespace std;
int main()
{
    unsigned long long int m,M,n,N,i,res,fn,fm,k;
    while(cin>>n>>m)
    {
        N=n;
        M=m;
        if(m+n==0)
            break;
        if(m>n/2)
            m=n-m;
        fm=1;
        fn=1;
        for(i=1;i<=m;i++)
        {
            fn= fn*(n--);
            fm= fm*i;
            for(k=m;k>=2;k--)
            {
                if(fn%k==0&&fm%k==0)
                {
                    while(fn%k==0&&fm%k==0)
                     {
                         fn=fn/k;
                         fm=fm/k;
                     }

                }
            }
        }
        cout<<N<<" things taken "<<M<<" at a time is "<<fn/fm<<" exactly."<<endl;

    }
    return 0;
}
