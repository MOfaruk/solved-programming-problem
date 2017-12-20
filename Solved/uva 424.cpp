#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    int i=-1,k,l,s,carry,tmp,len[101],mx_len=0,total_s,sum,res[250];
    char ara[101][101];
    while(cin>>ara[++i])
    {
        if(ara[i][0]=='0')
            break;
        l=strlen(ara[i])-1;
        len[i]=l;
        if(l>mx_len)
            mx_len=l;
    }
    total_s=i-1;
    carry=0;
    i=0;
    for(mx_len;mx_len>=0;mx_len--)
    {
        sum=0;
        for(k=0;k<=total_s;k++)
        {
            if(len[k]<0)
                continue;
            else{
            tmp=len[k]--;
            sum=sum+ara[k][tmp]-48;}
        }
        res[i++]=(carry+sum)%10;
        carry= (carry+sum)/10;
    }
    if(carry>0)
        cout<<carry;
    for(--i;i>=0;i--)
        cout<<res[i];
    cout<<endl;
    return 0;
}
