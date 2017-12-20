#include<iostream>
using namespace std;
int main()
{
    long long int t=1,test,i,n,k,mn,last,rung,ara[100000];
    cin>>test;
    while(test--)
    {
        cin>>n;
        mn=0;
        last=0;
        k=0;
        ara[0]=0;
        for(i=1; i<=n; i++)
        {
            cin>>ara[i];
        }
        for(i=n;i>0;i--)
        {
            if((ara[i]-ara[i-1])>mn)
                mn=ara[i]-ara[i-1];
            else if((ara[i]-ara[i-1])==mn)
                    mn++;
        }
        cout<<"Case "<<t++<<": "<<mn<<endl;
    }
    return 0;
}
