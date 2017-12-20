#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,n,l;
    string s;
    char ch;
    while(getline(cin,s))
    {
        if(s=="*")
            break;
        ch=s[0];
        n=1;
        if(ch>96)
            ch=ch-32;
        l=s.length();
        for(i=1;i<l-1;i++)
        {
            if(s[i]==' ')
            {
                if((s[i+1]==ch||s[i+1]==ch+32))
                    continue;
                else
                {
                    n=0;
                    break;
                }
            }
        }
        if(n==1)
            cout<<"Y"<<endl;
        else
            cout<<"N"<<endl;
    }
    return 0;
}
