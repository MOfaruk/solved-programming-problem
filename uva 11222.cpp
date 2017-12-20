#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t,a[1000],b[1000],c[1000],na,nb,nc,i,ara[3],A[1000],B[1000],C[1000];
    int ma, mb, mc,tc=1;
    cin>>t;
    while(t--)
    {
        cin>>na;
        ma=na;
        for( i=0;i<na;i++)
            cin>>a[i];
        cin>>nb;
        mb=nb;
        for( i=0;i<nb;i++)
            cin>>b[i];
        cin>>nc;
        mc=nc;
        for( i=0;i<nc;i++)
            cin>>c[i];
        sort(a,a+na);
        sort(b,b+nb);
        sort(c,c+nc);
        for(i=0;i<na;i++)
        {
            for(int j=0;j<nb;j++)
            {
                if(a[i]==b[j])
                {
                    ma--;
                    mb--;
                    A[i]=-1;
                    B[j]=-1;
                }
            }
            for(int k=0;k<nc;k++)
            {
                if(a[i]==c[k])
                {
                    if(A[i]!=-1)
                        ma--;
                    mc--;
                    A[i]=-1;
                    C[k]=-1;
                }
            }
        }
        for(i=0;i<nb;i++)
        {
            for(int j=0;j<nc;j++)
            {
                if(b[i]==c[j])
                {
                    if(C[i]!=-1)
                        mc--;
                    if(B[i]!=-1)
                        mb--;
                    B[i]=-1;
                    C[j]=-1;
                }
            }
        }
        ara[0]=ma;
        ara[1]=mb;
        ara[2]=mc;
        sort(ara,ara+3);
        cout<<"Case #"<<tc++<<":"<<endl;
        if(ara[2]==ma)
        {
            cout<<"1 "<<ma<<" ";
            for(i=0;i<na;i++)
             {
                if(A[i]==-1)
                    continue;
                cout<<a[i]<<" ";
             }
            cout<<endl;
        }
        if(ara[2]==mb)
        {
            cout<<"2 "<<mb<<" ";
            for(i=0;i<nb;i++)
            {
                if(B[i]==-1)
                    continue;
                cout<<b[i]<<" ";
             }
            cout<<endl;
        }
        if(ara[2]==mc)
        {
            cout<<"3 "<<mc<<" ";
            for(i=0;i<nc;i++)
            {
                if(C[i]==-1)
                    continue;
                cout<<c[i]<<" ";
             }
            cout<<endl;
        }

    }
    return 0;
}
