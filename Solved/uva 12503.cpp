#include<iostream>
#include<string>
using namespace std;
int main()
{
    int t,i,n,x,k;
    string input,ins[105],s;
    cin>>t;
    while(t--)
    {
        cin>>n;
        x=0;
        for(i=1;i<=n;i++)
        {
            cin>>input;
            if(input[0]=='S')
            {
                cin>>s>>k;
                ins[i]=ins[k];
            }
            else
                ins[i]= input;
        }
        for(i=1;i<=n;i++)
        {
            if(ins[i][0]=='R')
                x++;
            else
                x--;
        }
        cout<<x<<endl;

    }
    return 0;
}
