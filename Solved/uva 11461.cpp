#include<stdio.h>
#include<math.h>
int main()
{
    long long int a,b,m,n;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        if(a+b==0)
            break;
        m=sqrt(a-1);
        n=sqrt(b);
        printf("%lld\n",n-m);

    }
    return 0;
}
