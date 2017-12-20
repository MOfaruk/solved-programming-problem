#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int test,i,sum,cost,n,ara[5010];
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>ara[i];
        sort(ara,ara+n);
        sum=ara[0];
        cost=0;
        for(i=1;i<n;i++)
        {
            sum = sum+ ara[i];
            cost=cost+ sum;
        }
        cout<<cost<<endl;
    }
    return 0;
}
