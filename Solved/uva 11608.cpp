#include<iostream>
using namespace std;
int main()
{
    int res,req[12],cre[13],i,sum,cas=1;
    while(cin>>cre[0])
    {
        if(cre[0]<0)
            break;
        cout<<"Case "<<cas++<<":"<<endl;
        for(i=1;i<13;i++)
            cin>>cre[i];
        for(i=0;i<12;i++)
            cin>>req[i];
        sum=0;
        for(i=0;i<12;i++)
        {
            sum = sum + cre[i];
            if(sum>=req[i])
            {
                sum = sum - req[i];
                cout<<"No problem! :D"<<endl;
            }
            else
            {
                cout<<"No problem. :("<<endl;
            }
        }

    }
    return 0;
}
