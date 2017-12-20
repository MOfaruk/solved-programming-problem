#include<iostream>
using namespace std;
int main()
{
    int n,i,ara[1500],cnt,next;
    while(cin>>n)
    {
        cnt=0;
        next=0;
        for(i=0;i<n;i++)
        {
            cin>>ara[i];
            if(ara[i]==1)
            {
                cnt++;
                if(ara[i]==ara[i-1])
                    next++;
            }

        }
        cnt=cnt*2-1-next;
        if(cnt<0)
            cnt=0;
        cout<<cnt<<endl;

    }
    return 0;
}
