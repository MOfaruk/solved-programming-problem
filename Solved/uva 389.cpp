#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;
int main()
{
    long long int i,k,n,b1,b2,sum,l,tmp;
    char res[8],in[50];
    while(cin>>in>>b1>>b2)
    {
        sum=0;
        l=strlen(in);
        for(i=l-1,k=0;i>=0;i--,k++)
        {
            if(in[i]>='0'&&in[i]<='9')
                tmp=in[i]-48;
            else
                tmp=in[i]-55;
            sum=sum+ tmp*pow(b1,k);
        }
        k=-1;
        while(1)
        {
            tmp=sum%b2;
            if(tmp<10)
                res[++k]=tmp+48;
            else
                res[++k]= tmp+55;
            sum=sum/b2;
            if(k==7||sum==0)
                break;
        }
        if(k==7)
            cout<<"  ERROR"<<endl;
        else
        {
            for(i=6;i>k;i--)
                cout<<" ";
            for(k;k>=0;k--)
                cout<<res[k];
            cout<<endl;
        }
    }
    return 0;
}
