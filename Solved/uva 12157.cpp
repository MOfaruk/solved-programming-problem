#include<iostream>
using namespace std;
int main()
{
    int t,test=1,n,costm,costj,i,cd;
    cin>>t;
    while(t--)
    {
        cin>>n;
        costm=0;
        costj=0;
        for(i=0;i<n;i++)
        {
            cin>>cd;
            cd++;
            costm= costm + ((cd)/30)*10;
            if(cd%30>0)
                costm = costm+ 10;
            costj= costj + ((cd)/60)*15;
            if(cd%60>0)
                costj = costj+ 15;
        }
        if(costm<costj)
            cout<<"Case "<<test++<<": Mile "<<costm<<endl;
        else if(costm>costj)
            cout<<"Case "<<test++<<": Juice "<<costj<<endl;
        else
            cout<<"Case "<<test++<<": Mile Juice "<<costm<<endl;

    }
    return 0;
}
