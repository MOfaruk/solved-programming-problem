#include<iostream>
#include<string>
using namespace std;
int main()
{
    int i,j,n,len;
    string s;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>s;
        len= s.length()/n;
        for(i=1;i<=n;i++)
        {
            for(j=i*len;j>(i-1)*len;j--)
                cout<<s[j-1];
        }
        cout<<endl;
    }
    return 0;
}
