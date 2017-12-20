#include<iostream>
using namespace std;
int main()
{
    long long int i,n,k,p,carry,tmp;
    int ara[10000];
    while(cin>>n)
    {
        p=0;
        ara[p]=1;
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
        cout<<n<<"!"<<endl;
        for(p; p>=0; p--)
            cout<<ara[p];
        cout<<endl;
    }
    return 0;
}
