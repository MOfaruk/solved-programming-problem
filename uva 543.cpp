#include<iostream>
using namespace std;
int main()
{
    long long int i,k,n,ara[80000],p,tmp;
    while(1/*cin>>n*/)
    {
        if(n==0)
            break;
        p=-1;
        ara[++p]=2;
        ara[++p]=3;
        for(i=5;i<1000000;i+=2)
        {
            tmp=i/2;
            for(k=2;k<tmp;k++)
            {
                if(i%k==0)
                    break;
            }
            if(k==tmp)
               ara[++p]=i;
        }
        cout<<p+1<<"ok";
        break;
    }
    return 0;
}
