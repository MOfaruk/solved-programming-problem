#include<iostream>
using namespace std;
int main()
{
    int i,k,m,n,c,t=1;
    while(cin>>m>>n)
    {
        if(m+n==0)
            break;
        char ara[103][103]={0};
        for(i=1;i<=m;i++)
        {
            for(k=1;k<=n;k++)
                cin>>ara[i][k];
        }
        if(t!=1)
            cout<<endl;
        cout<<"Field #"<<t++<<":"<<endl;
        for(i=1;i<=m;i++)
        {
            for(k=1;k<=n;k++)
            {
                if(ara[i][k]=='*')
                    cout<<'*';
                else
                {
                    c=0;
                    if(ara[i][k-1]=='*')
                        c++;
                    if(ara[i][k+1]=='*')
                        c++;
                    if(ara[i-1][k]=='*')
                        c++;
                    if(ara[i+1][k]=='*')
                        c++;
                    if(ara[i+1][k+1]=='*')
                        c++;
                    if(ara[i+1][k-1]=='*')
                        c++;
                    if(ara[i-1][k-1]=='*')
                        c++;
                    if(ara[i-1][k+1]=='*')
                        c++;
                    cout<<c;
                }
            }
            cout<<endl;
        }

    }
    return 0;
}
