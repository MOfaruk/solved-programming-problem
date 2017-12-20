#include<iostream>
using namespace std;
int main()
{
    long long int a,m,b,n;
    while(cin>>a>>m)
    {
        if(a%m==0)
            cout<<"Yes"<<endl;
        else
        {
            n=a%m;
            a= a+ a%m;
            while(1)
            {
                if(a%m==0)
                {
                    b=1;
                    break;
                }
                else if(a%m==n)
                {
                    b=2;
                    break;
                }
                else
                    a=a+a%m;
            }
            if(b==1)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }
    return 0;
}
