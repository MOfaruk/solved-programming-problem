#include<iostream>
using namespace std;
int main()
{
    int i,k,n,p,c,ara[110];
    while(cin>>n)
    {
        for(i=1;i<=n;i++)
            ara[i]=1;
        for(k=1; k<=n; k++)
        {
            p=k;
            c=0;
            i=1;
            while(i>0)
            {
                if(ara[i]==1)
                {
                    if(p==k)
                    {
                        ara[i]=0;
                        p=1;
                        c++;
                    }
                    else
                        p++;
                }
                i++;
                if(i>n)
                    i=1;
                if(c==n-1)
                    i=0;

            }
            cout<<k;
            if(ara[13]==1)
                break;
        }
        if(k>n)
            cout<<"no"<<endl;
        else
            cout<<k<<endl;
    }
    return 0;
}
