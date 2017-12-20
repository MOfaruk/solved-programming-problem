#include<iostream>
using namespace std;
int main()
{
    int test,i,m,k,n;
    cin>>test;
    while(test--)
    {
        cin>>n;
        int ara[10]={0};
        for(i=1;i<=n;i++)
        {
            m=i;
            while(m>0)
            {
                k=m%10;
                ara[k]++;
                m=m/10;
            }
        }
        for(i=0;i<10;i++)
        {
            cout<<ara[i];
            if(i!=9)
                cout<<" ";
            else
                cout<<endl;
        }
    }
    return 0;
}
