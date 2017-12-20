#include<iostream>
using namespace std;
int main()
{
    int test,t=1,oil[100000],dis[100000];
    long long int i,n,toil,tdis;
    cin>>test;
    while(test--)
    {
        cin>>n;
        toil=0;
        tdis=0;
        for(i=0;i<n;i++)
        {
            cin>>oil[i];
            toil= toil+ oil[i];
        }
        for(i=0;i<n;i++)
        {
            cin>>dis[i];
            tdis= tdis+dis[i];
        }
        if(tdis>toil)
           {
               cout<<"impossible"<<endl;
               continue;
           }
        for(i=0;i<n;i++)
        {
            toil=0;
            tdis=0;
            for(j=i;;j++)
            {
                if(oil[j]<dis[j])
                    break;
                toil=oil[j]-dis[j];
                if(j==n-1)
                    j=0;
            }
        }


    }
    return 0;
}
