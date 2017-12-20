#include<iostream>
using namespace std;
int main()
{
    long long int n,b,h,w,p,i,k,total,room,subtotal;
    while(cin>>n>>b>>h>>w)
    {
        total= 9999999;
        for(i=0; i<h; i++)
        {
            cin>>p;
            for(k=0; k<w; k++)
            {
                cin>>room;
                if(room>=n)
                {
                    subtotal=p*n;
                    if(total>subtotal)
                        total=subtotal;
                }
            }
        }
        if(total>b||total==9999999)
            cout<<"stay home"<<endl;
        else
            cout<<total<<endl;
    }
    return 0;
}
