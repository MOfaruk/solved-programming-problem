#include<iostream>
using namespace std;
int main()
{
    long long int n,i,m,f,tmp;
    while(cin>>n)
    {
        if(n==0)
            break;
        m=0;
        f=1;
        for(i=2;i<=n;i++)
        {
            tmp=f;
            f=f+m;
            m=tmp;
        }
        cout<<m+f<<endl;
    }
    return 0;
}
