#include<iostream>
using namespace std;
int main()
{
    long long int n,i,m,k,mx;
    while(cin>>n)
    {
        if(n<0)
            break;
        mx=0;
        for(i=2;i<n/2;i++)
        {
            m=n;
            for(k=1;k<=i;k++)
            {
                if((m-1)%i!=0)
                    break;
                else
                    m = (m-1)/i*(i-1);
            }
            if(k>i&&i>mx)
                mx=i;
        }
        if(mx==0)
            cout<<n<<" coconuts, no solution"<<endl;
        else
            cout<<n<<" coconuts, "<<mx<<" people and 1 monkey"<<endl;
    }
    return 0;
}
