#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long long int i,n,sum,cost,s[5050];
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>s[i];
        sort(s,s+n);
        sum=s[0];
        cost=0;
        for(i=1;i<n;i++)
        {
            sum=sum+s[i];
            cost= cost + sum;
        }
        cout<<cost<<endl;
    }
    return 0;
}
