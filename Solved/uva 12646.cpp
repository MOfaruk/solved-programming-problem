#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        if(a+b+c==3||a+b+c==0)
            cout<<"*"<<endl;
        else if(a+b+c==2)
        {
            if(a==0)
                cout<<"A"<<endl;
            else if(b==0)
                cout<<"B"<<endl;
            else
                cout<<"C"<<endl;
        }
        else
        {
            if(a==1)
                cout<<"A"<<endl;
            else if(b==1)
                cout<<"B"<<endl;
            else
                cout<<"C"<<endl;
        }
    }
    return 0;
}
