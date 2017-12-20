#include<iostream>
using namespace std;
int main()
{
    long long int test,i,n,m,sum,c;
    cin>>test;
    while(test--)
    {
        cin>>n;
        m=n;
        c=0;
        while(m>0)
        {
            m=m/10;
            c++;
        }
        for(i=n-c*9;i<n;i++)
        {
            m=i;
            sum=0;
            while(m>0)
            {
                sum=sum+m%10;
                m=m/10;
            }
            if(sum+i==n)
            {
                cout<<i<<endl;
                break;
            }
        }
        if(i==n)
            cout<<0<<endl;
    }
    return 0;
}
