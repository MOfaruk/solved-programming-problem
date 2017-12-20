#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int index,i,length,w,k;
    char s[6];
    while((scanf("%s",s))!=EOF)
    {
        index = 0;
        length= strlen(s);
        for(i=0;i<length;i++)
        {
            k=length-i-1;
            index = index + pow(26,k)*(s[i]-96);
            printf("%d\n",pow(26,1));
        }
        printf("%d\n",index);
    }
    return 0;
}
