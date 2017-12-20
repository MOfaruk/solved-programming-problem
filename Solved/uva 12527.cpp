#include<iostream>
using namespace std;
int main()
{
    int m,n,i,j,k,cnt,t,br;
    int ara[4];
    while(cin>>n>>m)
    {
        cnt=0;
        for(n; n<=m; n++)
        {
            i=0;
            br=0;
            t=n;
            while(t>0)
            {
                ara[i++]=t%10;
                t=t/10;
            }
            k=0;
            if(i==1)
            {
                cnt++;
                continue;
            }
            for(j=0; j<i-1; j++)
            {
                for(k=j+1; k<i; k++)
                    if(ara[j]==ara[k])
                    {
                        br=1;
                        break;
                    }
                if(br==1)
                    break;
            }
            if(j==i-1&&k==i)
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
