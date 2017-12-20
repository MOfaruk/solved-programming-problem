#include<stdio.h>
int main()
{
    long long int i,k,n,l,u,sum,tmp;
    while(scanf("%lld%lld",&l,&u)==2)
    {
        if(l<0)
            break;
        sum=0;
        for(i=l;i<=u;i++)
        {
            if(i%10==0)
            {
                tmp=i;
                while(tmp%10==0&&tmp>0)
                    tmp=tmp/10;
                sum= sum+ tmp%10;
            }
            else
                sum= sum+ i%10;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
