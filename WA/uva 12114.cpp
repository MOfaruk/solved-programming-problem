#include<iostream>
using namespace std;
int main()
{
    long long int b,s,cas=1;
    while(cin>>b>>s)
    {
        if(b+s==0)
            break;
        if(b==1)
        {
            cout<<"Case "<<cas++<<": "<<":-/"<<endl;
            continue;
        }
        if(b<=s)
            cout<<"Case "<<cas++<<": "<<":-|"<<endl;
        else
            cout<<"Case "<<cas++<<": "<<":-("<<endl;
    }
    return 0;
}
