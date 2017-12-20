#include<stdio.h>
#include<math.h>

int main()
{
    unsigned long long int n,i,m,r,c;
    while(scanf("%llu",&n)==1)
    {
        if(n==0)
            break;
        i=sqrt(n);
        if(i*i!=n)
            i++;
        if(i%2==1)
        {
            m=i*i-(i-1);
            if(n>=m)
            {
                r=i;
                c=i-(n-m);
            }
            else
            {
                c=i;
                r= i-(m-n);
            }
        }
        else
        {
            m=i*i+(i-1);
            if(n>=m)
            {
                c=i;
                r=i-(n-m);
            }
            else
            {
                r=i;
                c= i-(m-n);
            }
        }
        printf("%llu %llu\n",c,r);
    }
    return 0;
}
