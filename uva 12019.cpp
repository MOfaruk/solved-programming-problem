#include<iostream>
#include<string>
using namespace std;

int main()
{
    int m,d,total,i,n,test,ara[]={31,28,31,30,31,30,31,31,30,31,30,31};
    string day[]={"Friday","Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday"};
    cin>>test;
    while(test--)
    {
        cin>>m>>d;
        total=d;
        for(i=0;i<m-1;i++)
            total = total +ara[i];
        total= total%7;
        cout<<day[total]<<endl;

    }
    return 0;
}
