#include<iostream>
#include<set>
using namespace std;

int main()
{
    int test, i,j, ara[100],hortal[4000],N,p,h;

    cin>>test;
    while(test--)
    {
        set<int>s;
        cin>>N;
        cin>>p;
        for(i=0;i<p;i++)
            cin>>ara[i];
        for(i=0;i<p;i++)
        {
            for(int j=1;ara[i]*j<=N;j++)
             {
                 if((ara[i]*j+1)%7==0)
                    continue;
                if((ara[i]*j)%7==0)
                    continue;
                 s.insert(ara[i]*j);
             }
        }
        h=s.size();
        cout<<h<<endl;

    }
    return 0;
}
