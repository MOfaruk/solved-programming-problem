#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,t,c,l,j;
    char num[10][10]={"one","two","three","four","five","six","seven","eight","nine","ten"},word[10];
    cin>>t;
    while(t--)
    {
        cin>>word;
        l= strlen(word);
        for(i=0;i<10;i++)
        {
            if(strlen(num[i])!=l)
                continue;
            c=0;
            for(j=0;j<l;j++)
            {
                if(word[j]!=num[i][j])
                    c++;
                if(c>1)
                    break;
            }
            if(c==1)
                cout<<i+1<<endl;
        }
    }
    return 0;
}
