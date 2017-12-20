#include<iostream>
using namespace std;
int main()
{
    long long int g,l,n;
    cin>>n;
    while(n--)
    {
        cin>>g>>l;
        if(l%g==0)
            cout<<g<<" "<<l<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}
