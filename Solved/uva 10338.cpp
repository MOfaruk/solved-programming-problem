#include<iostream>
using namespace std;
int main()
{
    unsigned long long int t=1,test,n,i,k,tmp,N;
    char s[25];
    cin>>test;
    while(test--)
    {
        cin>>s;
        int ara[27]= {0};
        for(i=0; s[i]; i++)
        {
            tmp=s[i]-64;
            ara[tmp]++;
        }
        n=i;
        N=1;
        for(n; n>1; n--)
        {
            N=N*n;
            for(i=1; i<27; i++)
            {
                k=ara[i];
                for(; k>1;)
                {
                    if(N%k==0)
                    {
                        N=N/k;
                        ara[i]--;
                        k--;
                    }
                    else
                        break;
                }

            }
        }
        cout<<"Data set "<<t++<<": "<<N<<endl;
    }
    return 0;
}
