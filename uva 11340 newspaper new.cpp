#include<stdio.h>
int main()
{
    long long int test,i,k,line,val;
    char s[10005],ch;
    double sum;
    scanf("%lld\n",&test);
    while(test--)
    {
        scanf("%lld\n",&k);
        int ara[256];
        for(i=0;i<256;i++)
            ara[i]=0;
        while(k--)
        {
            scanf("%c%lld\n",&ch,&val);
            ara[ch]=val;
        }
        scanf("%lld\n",&line);
        sum=0;
        while(line--)
        {
            gets(s);
            for(i=0;s[i];i++)
            {
                sum= sum+ ara[s[i]];
            }
        }
        printf("%.2lf$\n",sum/100.00);
    }
    return 0;
}
