#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    long long int test,n,paid_val,line,i,l,dollar,cent;
    char paid_ch,k;
    long long int total;
    char s[10005];
    cin>>test;
    getchar();
    while(test--)
    {
        cin>>n;
        getchar();
        int ara[255]={0};
        for(i=0;i<n;i++)
        {
            cin>>paid_ch>>paid_val;
            getchar();
            ara[paid_ch]= paid_val;
        }
        total = 0;
        cin>>line;
        getchar();
        for(i=1;i<=line;i++)
        {
            gets(s);
            l=strlen(s);
            for(int j=0;j<l;j++)
            {
                k = s[j];
                total = total + ara[k];
            }
        }
        dollar= total/100;
        cent=total%100;
        cout<<dollar<<".";
        if(cent<10)
            cout<<"0";
        cout<<cent<<"$"<<endl;
    }
    return 0;
}
