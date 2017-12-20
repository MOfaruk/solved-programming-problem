#include<iostream>
using namespace std;
int main()
{
    long long int i,n,mxx,mxy,mnx,mny,difx,dify;
    while(cin>>n)
    {
        mxx=0;
        mxy=0;
        mny=99999999;
        mnx=99999999;
        for(i=0;i<n;i++)
        {
            long long int x,y;
            cin>>x>>y;
            if(x>mxx)
                mxx=x;
            if(x<mnx)
                mnx=x;
            if(y>mxy)
                mxy=y;
            if(y<mny)
                mny=y;
        }
        difx=mxx-mnx;
        if(difx<0)
            difx=difx*(-1);
        dify=mxy-mny;
        if(dify<0)
            dify=dify*(-1);
        if(difx>dify)
            cout<<difx*difx<<endl;
        else
            cout<<dify*dify<<endl;
    }
    return 0;
}
