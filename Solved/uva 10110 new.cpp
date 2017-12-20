#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    unsigned long long int n,s;
    while(cin>>n)
    {
        if(n==0)
            break;
        s=sqrt(n);
        if(n==s*s)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
    return 0;
}

