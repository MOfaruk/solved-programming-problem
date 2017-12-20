#include<iostream>
using namespace std;
int main()
{
    int test,t=1,i,n,j,m;
    char mat[10][10],tmp[10],temp;
    string s;
    cin>>test;
    while(test--)
    {
        cin>>n;
        for(i=0;i<n;i++)
            cin>>mat[i];
        cin>>m;
        for(int l=0;l<m;l++)
        {
            cin>>s;
            if(s[0]=='c')
            {
                int c1;
                int c2;
                cin>>c1>>c2;
                c1--;
                c2--;
                for(j=0;j<n;j++)
                    tmp[j]=mat[j][c1];
                for(j=0;j<n;j++)
                    mat[j][c1]=mat[j][c2];
                for(j=0;j<n;j++)
                    mat[j][c2]=tmp[j];
            }
            else if(s[0]=='r')
            {
                int r1;
                int r2;
                cin>>r1>>r2;
                r1--;
                r2--;
                for(j=0;j<n;j++)
                    tmp[j]=mat[r1][j];
                for(j=0;j<n;j++)
                    mat[r1][j]=mat[r2][j];
                for(j=0;j<n;j++)
                    mat[r2][j]=tmp[j];
            }
            else if(s[0]=='i')
            {
                for(i=0;i<n;i++)
                    for(j=0;j<n;j++)
                    {
                        mat[i][j]=(mat[i][j]+1);
                        if(mat[i][j]==58)
                            mat[i][j]=48;
                    }
            }
            else if(s[0]=='d')
            {
                for(i=0;i<n;i++)
                    for(j=0;j<n;j++)
                    {
                        mat[i][j]=(mat[i][j]-1);
                        if(mat[i][j]==47)
                            mat[i][j]=57;
                    }
            }
            else
            {
                for(i=1;i<n;i++)
                    for(j=0;j<=i;j++)
                    {
                        temp=mat[i][j];
                        mat[i][j]=mat[j][i];
                        mat[j][i]=temp;
                    }
            }

        }
        cout<<"Case #"<<t++<<endl;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
                cout<<mat[i][j];
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}
