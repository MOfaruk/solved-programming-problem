#include<iostream>
using namespace std;
int main()
{
    int n,i,sum1,sum2;
    char crd[4][4];
    cin>>n;
    while(n--)
    {
        sum1=0;
        sum2=0;
        for(i=0; i<4; i++)
        {
            cin>>crd[i];
            sum1=sum1 + crd[i][1]-48+crd[i][3]-48;
            if(crd[i][0]<'5')
                sum2= sum2 + (crd[i][0]-48)*2;
            else
                sum2= sum2 + 1 +((crd[i][0]-48)*2)%10;

            if(crd[i][2]<'5')
                sum2= sum2 + (crd[i][2]-48)*2;
            else
                sum2= sum2 + 1+((crd[i][2]-48)*2)%10;
        }
        if((sum1+sum2)%10==0)
            cout<<"Valid"<<endl;
        else
            cout<<"Invalid"<<endl;
    }
    return 0;
}
