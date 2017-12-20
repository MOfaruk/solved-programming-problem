#include<iostream>
#include<algorithm>
using namespace  std;
int main()
{
    long long int m,n,d,i,k,l,c;
    int ara[10];
    while(cin>>k)
    {
        for(i=0;k>0;i++)
        {
            ara[i]=k%10;
            k=k/10;
        }
        l=i;
        sort(ara,ara+l);
        n=0;
        m=0;
        c=1;
        for(i=0;i<l;i++)
        {
            if(ara[i]==0)
                c=c*10;
            else
            {
                n=n*10+ara[i];
                n=n*c;
                c=1;
            }
        }
        for(i=l-1;i>=0;i--)
        {
            m=m*10+ara[i];
        }
        if(m>n)
            d=m-n;
        else
            d=n-m;
        if(m>n)
            cout<<m<<" - "<<n<<" = "<<d<<" = "<<9<<" * "<<d/9<<endl;
        else
            cout<<n<<" - "<<m<<" = "<<d<<" = "<<9<<" * "<<d/9<<endl;
    }
    return 0;
}
