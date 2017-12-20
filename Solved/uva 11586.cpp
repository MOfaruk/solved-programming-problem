#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int m,f,i,n;
    char s[200];
    cin>>n;
    getchar();
    while(n--)
    {
        gets(s);
        m=0;
        f=0;
        for(i=0;s[i];i++)
        {
            if(s[i]=='M')
                m++;
            if(s[i]=='F')
                f++;
        }
        if((m==f) && m>1)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }
    return 0;
}
