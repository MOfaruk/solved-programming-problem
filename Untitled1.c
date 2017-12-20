#include<stdio.h>
#include<string.h>
int main()
{
    char s[15];
    int l;
    printf("Enter your name: ");
    scanf("%s",s);
    strrev(s);
    l=strlen(s);
    printf("HI %s !!!\n You name has %d letters.\n",s,l);
    main();
    return 0;
}
