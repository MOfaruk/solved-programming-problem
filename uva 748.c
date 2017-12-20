#include<stdio.h>
#include<math.h>
int main()
{
    double r,n;
    while(scanf("%lf%lf",&r,&n)==2)
        printf("%lf\n",pow(r,n));
    return 0;
}
