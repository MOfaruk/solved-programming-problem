#include<iostream>
using namespace std;
int main()
{
    int h,d,n,f,i;
    double r,day,Fat;
    while(cin>>h>>d>>n>>f)
    {
        if(h==0)
            break;
        r=0;
        day=d;
        Fat=0;
        for(i=1;; i++)
        {
            day= day - Fat;
            if(day<0)
                day=0;
            Fat=(double)(d*f)/100;
            r= r+ day;
            cout<<r<<" "<<Fat<<endl;
            if(r>(double)h)
            {
                cout<<"success "<<i<<endl;
                break;
            }
            //r= r-n;
            if(r<=0)
            {
                cout<<"failed "<<i<<endl;
                break;
            }
            r=r-n;
        }
    }
    return 0;
}
