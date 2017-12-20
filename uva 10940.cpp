#include<iostream>
#include<queue>
using namespace std;
int main()
{
    long long int i,n,m;
    while(cin>>n)
    {
        if(n==0)
            break;
        queue<long long> card;
        for(i=1;i<=n;i++)
            card.push(i);
        m=0;
        while(1)
        {
            if(m==card.front())
                break;
            card.pop();
            m=card.front();
            card.pop();
            card.push(m);
        }
        cout<<m<<endl;
    }
    return 0;
}
