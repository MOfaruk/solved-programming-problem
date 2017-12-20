#include<iostream>
using namespace std;
int main()
{
    int i,l,n;
    string s;
    while(cin>>s)
    {
        l=-5;
        n=-5;
        for(i=0;s[i];i++)
        {
            if(s[i]==s[i-1])
                continue;
            else if(s[i]=='B'||s[i]=='F'||s[i]=='P'||s[i]=='V')
                n=1;
            else if(s[i]=='C'||s[i]=='G'||s[i]=='J'||s[i]=='K'||s[i]=='Q'||s[i]=='S'||s[i]=='X'||s[i]=='Z')
                n=2;
            else if(s[i]=='D'||s[i]=='T')
                n=3;
            else if(s[i]=='L')
                n=4;
            else if(s[i]=='M'||s[i]=='N')
                n=5;
            else if(s[i]=='R')
                n=6;
            else
                n=0;

            if(n!=l&&n!=0)
                cout<<n;
            l=n;
        }
        cout<<endl;
    }
    return 0;
}
