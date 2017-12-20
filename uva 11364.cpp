#include<stdio.h>
int main()
{
    int test,i,mx,mn,n,store;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d",&n);
        mx=0;
        mn=9999;
        while(n--)
        {
            scanf("%d",&store);
            if(store>mx)
                mx= store;
            if(store<mn)
                mn=store;
        }
        printf("%d\n",(mx-mn)*2);
    }
    return 0;
}
