#include<iostream>
using namespace std;
int main()
{
    int t=1,test,n,i,mn,ctime,atime,time,total;
    char s[5];
    cin>>test;
    while(test--)
    {
        mn=99999;
        cin>>n>>s;
        ctime=((s[0]-48)*10+(s[1]-48))*60 + ((s[3]-48)*10+(s[4]-48));
        for(i=1;i<=n;i++)
        {
            cin>>s>>atime;
            time=((s[0]-48)*10+(s[1]-48))*60 + ((s[3]-48)*10+(s[4]-48));
            if(time<ctime)
                time = time + 1440;
            total= time+atime-ctime;
            if(mn>total)
                mn= total;
        }
        cout<<"Case "<<t++<<": "<<mn<<endl;
    }
    return 0;
}
