#include<iostream>
using namespace std;
int main()
{
    long long int s,p,i,L,C,centre;
    while(cin>>s>>p)
    {
        if(s+p==0)
            break;
        centre=(s+1)/2;
        for(i=1;;i+=2)
        {
            if(p<=i*i)
                break;
        }
        if(p<=((i*i)+(i-2)*(i-2))/2)
        {
            if(p<=(i-2)*(i-2)+(i-1))
             {
                 L=centre + (i-1)/2;
                 C=(s-i)/2+(i-2)*(i-2)+(i-1)-p+1;
             }
             else
             {
                 C=centre - (i-1)/2;
                 L=(s-i)/2+((i*i)+(i-2)*(i-2))/2-p+1;
             }
        }
        else
        {
            if(p<=(i-2)*(i-2)+(i-1)*3)
             {
                 L=centre - (i-1)/2;
                 C=(s-i)/2+ p-((i*i)+(i-2)*(i-2))/2+1;
             }
             else
             {
                 C=centre + (i-1)/2;
                 L=(s-i)/2+p-((i-2)*(i-2)+(i-1)*3)+1;
             }
        }
        cout<<"Line = "<<L<<", column = "<<C<<"."<<endl;
    }
    return 0;
}
