#include<iostream>
using namespace std;
int main()
{
    long long int i,k,n,a,b,x,y,sum,mx,ara[101][101];
    while(cin>>n)
    {
        for(i=0;i<n;i++)
            for(k=0;k<n;k++)
                cin>>ara[i][k];
        mx=0;
        for(i=1;i<=n;i++)
        {
            for(k=1;k<=n;k++)
            {
                for(a=0;a<n-i+1;a++)
                {
                    for(b=0;b<n-k+1;b++)
                    {
                        sum=0;
                        for(x=b;x<b+k;x++)
                            for(y=a;y<a+i;y++)
                                sum= sum+ ara[x][y];
                        if(sum>mx)
                            mx=sum;
                    }
                }
            }
        }
        cout<<mx<<endl;
    }
    return 0;
}
