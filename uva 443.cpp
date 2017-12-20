#include<iostream>
using namespace std;
int main()
{
    long long int i,k=0,n,tmp,ara[6000];
    for(i=1; i<=2000000000; i++)
    {
        tmp=i;
        while(tmp%2==0)
            tmp=tmp/2;
        while(tmp%3==0)
            tmp=tmp/3;
        while(tmp%5==0)
            tmp=tmp/5;
        while(tmp%7==0)
            tmp=tmp/7;
        if(tmp==1)
            cout<<i<<",";
    }
    cout<<"   ll"<<endl;
    return 0;
}
