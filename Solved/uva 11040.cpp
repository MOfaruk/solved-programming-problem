#include<iostream>
using namespace std;
int main()
{
    int i,j,op[9][9],n;
    cin>>n;
    while(n--)
    {
        for(i=0;i<9;i+=2)
            for(j=0;j<=i;j+=2)
                cin>>op[i][j];
        for(i=8;i>=0;i--)
        {
            if(i%2==0)  //it means odd line as 8+1 = 9
                for(j=1;j<=i;j+=2)
                {
                    op[i][j]=(op[i-2][j-1]-op[i][j-1]-op[i][j+1])/2;
                }
            else
                for(j=0;j<=i;j++)
                    op[i][j]= op[i+1][j]+op[i+1][j+1];
        }
        for(i=0;i<9;i++)
        {
            for(j=0;j<=i;j++)
            {
                cout<<op[i][j];
                if(j!=i)
                    cout<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
