#include<iostream>
using namespace std;
int main()
{
    int i,s,e,fst,snd,ans,cnt=0;
    char ch,eqn[15];
    while(cin>>eqn)
    {
        for(i=0;eqn[i];i++)
        {
            if(eqn[i]=='+'||eqn[i]=='-')
                {s=i;
                ch=eqn[i];}
            if(eqn[i]=='=')
                e=i;
        }
        fst=0;
        for(i=0;i<s;i++)
            fst= fst*10+eqn[i]-48;
        snd=0;
        for(i=s+1;i<e;i++)
            snd= snd*10+eqn[i]-48;
        ans=0;
        for(i=e+1;eqn[i];i++)
           {
               if(eqn[i]=='?')
                ans=5555;
               ans= ans*10+eqn[i]-48;
           }
        if(ch=='+'&&(fst+snd==ans))
            cnt++;
        if(ch=='-'&&(fst-snd==ans))
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
