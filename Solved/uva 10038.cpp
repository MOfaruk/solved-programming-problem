#include<iostream>
using namespace std;
int main()
{
    long long int i,n,last,current,k,dif;
    while(cin>>n)
    {
        cin>>last;
        k=0;
        long long int ara[3005]={0};
        for(i=1; i<n; i++)
        {
            cin>>current;
            dif= current-last;
            if(dif<0)
                dif= dif*(-1);
            if(dif>=n||dif==0)
            {
                k=1;
                continue;
            }
            ara[dif]=1;
            last= current;
        }
        if(k==1)
            cout<<"Not jolly"<<endl;
        else
        {
            for(i=1; i<n; i++)
                if(ara[i]!=1)
                    break;
            if(i!=n)
                cout<<"Not jolly"<<endl;
            else
                cout<<"Jolly"<<endl;
        }

    }
    return 0;
}
