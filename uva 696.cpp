#include<iostream>
using namespace std;
int main()
{
    int m,n;
    while(cin>>m>>n)
    {
        if(m+n==0)
            break;
        if(m==1)
        cout<<n<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        else if(n==1)
            cout<<m<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        else if(m==2&&n==2)
            cout<<4<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        else if(m==2&&n==3)
            cout<<4<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
        else
            cout<<((m*n)+1)/2<<" knights may be placed on a "<<m<<" row "<<n<<" column board."<<endl;
    }
    return 0;
}
