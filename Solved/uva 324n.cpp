#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    long long int i,n,k,p,carry,tmp;
    int ara[800];
    char c1='(',c2=')';
    while(cin>>n)
    {
        if(n==0)
            break;
        p=0;
        ara[p]=1;
        int digit[10]={0};
        for(i=1; i<=n; i++)
        {
            carry=0;
            for(k=0; k<=p; k++)
            {
                tmp=ara[k]*i;
                ara[k]=(tmp + carry)%10;
                carry=( tmp + carry)/10;
            }
            while(carry>0)
            {
                ara[++p]= carry%10;
                carry = carry/10;
            }

        }
        cout<<n<<"! --"<<endl;
        for(p; p>=0; p--)
        {
            tmp=ara[p];
            digit[tmp]++;
        }
        for(i=0;i<10;i++)
        {
            if(i==5)
                printf("\n");
            if(i%5==0)
                cout<<"   ("<<i<<")";
            else
                cout<<"    ("<<i<<")";
            printf("%5d",digit[i]);
        }
        printf("\n");

    }
    return 0;
}
