#include<stdio.h>
int main()
{
    int i,n,m,fct,ara[26]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101};
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
        printf("%3d! =",n);
        for(i=0;ara[i]<=n;i++)
        {
            m=n;
            fct=0;
            while(m>0)
            {
                fct = fct + m/ara[i];
                m= m/ara[i];
            }
            if(i%15==0&&i>0)
                printf("\n      ");
            printf("%3d",fct);
        }
        printf("\n");
    }
    return 0;
}
