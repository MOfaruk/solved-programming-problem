#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,ara[1000],i;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=0;i<n;i++)
            cin>>ara[i];
        if(n<8)
        {
            cout<<"IMPOSSIBLE"<<endl;
            continue;
        }
        sort(ara,ara+n);
        for(i=0;i<n-1;i++)
        {
            if(ara[i+1]>(ara[i]+200))
                break;
        }
        if(2*(1422-ara[n-1])>200)
            cout<<"IMPOSSIBLE"<<endl;
        else if(i==(n-1))
            cout<<"POSSIBLE"<<endl;
        else
            cout<<"IMPOSSIBLE"<<endl;
    }
    return 0;
}
