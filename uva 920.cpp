#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
    long long int test,i,k,mx,x2,y2,x1,y1,n,ara[100][2];
    double total,sunny;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i][0]>>ara[i][1];
        for(i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(ara[i][0]>ara[j][0])
                {
                    int tmp=ara[i][0];
                    ara[i][0]=ara[j][0];
                    ara[j][0]=tmp;

                    tmp=ara[i][1];
                    ara[i][1]=ara[j][1];
                    ara[j][1]=tmp;
                }
            }
        }
        x2=ara[n-1][0];
        y2=ara[n-1][1];
        mx=y2;
        total=0;
        for(i=n-2;i>=0;i--)
        {
            x1=ara[i][0];
            y1=ara[i][1];
            if(y1>mx)
            {
                double m,c,x3,y3;
                m=(double)(y1-y2)/(x1-x2);
                c=y1-m*x1;
                x3=(mx-c)/(double)m;
                y3=mx;
                sunny=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
                total = total+ sunny;
                mx=y1;
            }
            x2=x1;
            y2=y1;
        }
        printf("%.2lf\n",total);
    }
    return 0;
}
