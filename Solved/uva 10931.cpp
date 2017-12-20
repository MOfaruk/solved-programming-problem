#include<iostream>
using namespace std;
int main()
{
    long long int n,i,k,sum;
    int b[100];
    while(cin>>n)
    {
        if(n==0)
            break;
        i=0;
        sum=0;
        while(n>0)
        {
            b[i++]= n % 2;
            sum= sum + b[i-1];
            n = n/2;
        }
        cout<<"The parity of ";
        for(--i;i>=0;i--)
            cout<<b[i];
        cout<<" is "<<sum<<" (mod 2)."<<endl;

    }
    return 0;
}
