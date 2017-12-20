#include<iostream>
using namespace std;
int main()
{
    int t,test=1,i,n,d,ara[100],sub;
    string s[100],ass;
    cin>>t;
    while(t--)
    {
        cin>>sub;
        for(i=0;i<sub;i++)
            cin>>s[i]>>ara[i];
        cin>>d;
        cin>>ass;
        for(i=0;i<sub;i++)
            if(ass==s[i])
                break;
        if(i==sub)
            cout<<"Case "<<test++<<": Do your own homework!"<<endl;
        else
        {
            if(ara[i]<=d)
                cout<<"Case "<<test++<<": Yesss"<<endl;
            else if(ara[i]<=d+5)
                cout<<"Case "<<test++<<": Late"<<endl;
            else
                cout<<"Case "<<test++<<": Do your own homework!"<<endl;
        }
    }
    return 0;
}
