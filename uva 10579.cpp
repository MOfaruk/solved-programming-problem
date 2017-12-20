#include<iostream>
int ara[4800][1100];
using namespace std;
int main()
{
    unsigned long long int i,k,n,a,b,carry,tmp;
    ara[0][0]=1;
    ara[1][0]=1;
    ara[0][1]=0;
    ara[1][1]=1;
    for(i=2; i<4800; i++)
    {
        k=1;
        a=ara[i-1][0];
        carry=0;
        while(k<=a)
        {
            tmp=ara[i-2][k]+ara[i-1][k]+carry;
            ara[i][k++]=tmp%10;
            carry=tmp/10;
        }
        k--;
        if(carry>0)
            ara[i][++k]=carry;
        ara[i][0]=k;
    }
    while(cin>>n)
    {
        for(i=ara[n][0]; i>0; i--)
            cout<<ara[n][i];
        cout<<endl;
    }
    return 0;
}

