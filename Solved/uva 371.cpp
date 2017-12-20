#include<iostream>
using namespace std;
int main()
{
    long long int i,l,h,v,mx,tmp,c;
    while(cin>>l>>h)
    {
        if(l+h==0)
            break;
        if(l>h)
        {
            tmp=l;
            l=h;
            h=tmp;
        }
        mx=0;
        for(i=l;i<=h;i++)
        {
            tmp=i;
            c=0;
            while(1)
            {
                if(tmp%2==0)
                    tmp= tmp/2;
                else
                    tmp = 3* tmp+1;
                c++;
                if(tmp==1)
                    break;
            }
            if(c>mx)
            {
                mx=c;
                v=i;
            }
        }
        cout<<"Between "<<l<<" and "<<h<<", "<<v<<" generates the longest sequence of "<<mx<<" values."<<endl;
    }
    return 0;
}
