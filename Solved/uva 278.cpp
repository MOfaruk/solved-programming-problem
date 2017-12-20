#include<iostream>
using namespace std;
int main()
{
    int m,n,t;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c>>m>>n;
        if(c=='r')
        {
            if(m<n)
                cout<<m<<endl;
            else
                cout<<n<<endl;
        }
        else if(c=='Q')
        {
            if(m<n)
                cout<<m<<endl;
            else
                cout<<n<<endl;
        }
        else if(c=='k')
            cout<<((m*n)+1)/2<<endl;
        else
            cout<<((m+1)/2)*((n+1)/2)<<endl;
    }
    return 0;
}
