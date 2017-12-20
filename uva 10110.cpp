#include<iostream>
using namespace std;
int main()
{
    long long int n,i,k,d,m;
    while(cin>>n)
    {
        if(n==0)
            break;
        d=0;
        m=n;
        for(i=1;i<=m;i++)
        {
            if(n%i==0)
            {
                m=n/i;
                if(i==m)
                    d++;
                else
                    d+=2;
            }
        }
        if(d%2==1)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}
