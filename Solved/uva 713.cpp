#include<stdio.h>
#include<string.h>
int main()
{
    int i,k,n,l1,l2,tmp,l,carry;
    char s1[210],s2[210],r[210];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%s%s",s1,s2);
        for(i=0;s1[i];i++)
            if(s1[i]>'0'&&s1[i]<='9')
                l1=i;
        for(i=0;s2[i];i++)
            if(s2[i]>'0'&&s2[i]<='9')
                l2=i;
        if(l1>l2)
            l=l1;
        else
            l=l2;
        carry=0;
        for(i=0;i<=l;i++)
        {
            if(i>l2)
                s2[i]=48;
            if(i>l1)
                s1[i]=48;
            tmp=s1[i]+s2[i]-96+carry;
            if(tmp>9)
            {
                carry=1;
                tmp=tmp-10;
            }
            else
                carry=0;

            r[i]=tmp+48;
        }
        if(carry==1)
            r[i++]='1';
        for(k=0;k<i;k++)
            if(r[k]!='0')
            {
                for(;k<i;k++)
                    printf("%c",r[k]);
            }
        printf("\n");
    }
    return 0;
}
