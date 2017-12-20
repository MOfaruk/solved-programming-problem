#include<stdio.h>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    double ara[20000][2],r,mx,my,x1,x2,y1,y2;
    double m1,c1,m2,c2,x,y,mn_dis,dis,X,Y,d1,d2;
    long long int i,n;

    while(scanf("%lf %lf", &mx, &my)==2)
    {
        scanf("%lld",&n);
        if(n==0)
        {
            printf("%.4lf\n%.4lf\n",mx,my);
            continue;
        }
        for(i=0; i<=n; i++)
        {
            scanf("%lf",&ara[i][0]);
            scanf("%lf",&ara[i][1]);
        }
        x1=ara[0][0];
        y1=ara[0][1];
        mn_dis=999999999.0;
        for(i=1; i<=n; i++)
        {
            x2=ara[i][0];
            y2=ara[i][1];
            if((x1-x2)==0)
            {
                x=x1;
                y=my;
            }
            else
            {
                m1=(double)(y1-y2)/(x1-x2);
                c1=y1-m1*x1;
                if(m1==0)
                    m2=100000000;
                else
                    m2=(-1)/m1;
                c2=my-mx*m2;

            x=-(c1-c2)/(m1-m2);
            y=m1*x+c1;
            }

            if(x<min(x1,x2)||x>max(x1,x2)||y<min(y1,y2)||y>max(y1,y2))
            {
                d1=sqrt((x1-x)*(x1-x)+(y1-y)*(y1-y));
                d2=sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
                if(d1<d2)
                {
                    x=x1;
                    y=y1;
                }
                else
                {
                    x=x2;
                    y=y2;
                }
            }
            dis=sqrt((mx-x)*(mx-x)+(my-y)*(my-y));
            if(dis<mn_dis)
            {
                X=x;
                Y=y;
                mn_dis=dis;
            }
            x1=x2;
            y1=y2;
        }
        if(X> -.0001&&X<=0.0)
            X=0.0;
        if(Y> -0.0001&&Y<=0.0)
            Y=0.0;
        printf("%.4lf\n%.4lf\n",X,Y);
    }
    return 0;
}
