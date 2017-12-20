#include<iostream>
using namespace std;
int main()
{
    int n,i,carry,cnt,sign;
    char s[110];
    while(cin>>n)
    {
        cin>>s;
        carry=1;
        cnt=0;
        for(i=0;i<n;i++)
        {
            sign=s[i]-48+carry;
            if(sign>1)
            {
                carry=1;
                sign=0;
            }
            else
                carry=0;
            if(sign!=(s[i]-48))
                cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
