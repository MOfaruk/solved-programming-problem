#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int test,i,k,n,mn,sum,ara[510];
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        mn=9999999;
        for(i=0;i<n;i++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                if(ara[k]-ara[i]>0)
                    sum = sum + ara[k]-ara[i];
                else
                    sum = sum +ara[i]-ara[k];
            }
            if(mn>sum)
            {
                mn=sum;
            }
        }
        cout<<mn<<endl;
    }
    return 0;
}
