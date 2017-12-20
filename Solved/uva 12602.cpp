#include<iostream>
using namespace std;
int main()
{
    string s;
    int t,l,d,diff;
    cin>>t;
    while(t--)
    {
        cin>>s;
        l=(s[0]-65)*676 + (s[1]-65)*26 + (s[2]-65);
        d=(s[4]-48)*1000+ (s[5]-48)*100 +(s[6]-48)*10 +(s[7]-48);
        diff=l-d;
        if(diff>100||diff<-100)
            cout<<"not nice"<<endl;
        else
            cout<<"nice"<<endl;
    }
    return 0;
}
