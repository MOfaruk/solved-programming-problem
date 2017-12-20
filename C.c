#include<stdio.h>
int main()
{
    unsigned __int64 i,l,u,m,pos;
    int test,sum,mx_sum;;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%I64d %I64d",&l,&u);
        mx_sum=0;
        for(i=l;i<=u;i++)
        {
            m=i;
            sum=0;
            while(m>0)
            {
                sum=sum+ m%2;
                m=m/2;
            }
            if(sum>mx_sum)
            {
                mx_sum=sum;
                pos=i;
            }
        }
        printf("%I64d\n",pos);

    }
    return 0;
}
