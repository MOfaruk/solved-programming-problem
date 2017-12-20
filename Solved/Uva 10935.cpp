#include<iostream>
using namespace std;
int main()
{
    int n,i, stk[300],f,l;
    while(cin>>n)
    {
        if(n==0)
            break;
        for(i=1;i<=n;i++)
            stk[i]=i;
        l=i;
        f=1;
        cout<<"Discarded cards:";
        while(1)
        {

            if(f==l-1)
            break;
            cout<<" "<<stk[f];
            stk[l]=stk[f+1];
            if(f!=l-2)
                cout<<",";
            l++;
            f=f+2;

        }
        cout<<endl<<"Remaining card: "<<stk[f]<<endl;
    }
    return 0;
}
