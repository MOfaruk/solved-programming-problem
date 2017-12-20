#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,i,m,w,c;
    string man[105],word[16]= {"Happy","birthday","to","you","Happy","birthday","to","you","Happy","birthday","to","Rujia","Happy","birthday","to","you"};
    while(cin>>n)
    {
        for(i=0; i<n; i++)
            cin>>man[i];
        m=0;
        w=0;
        c=0;
        while(1)
        {
            cout<<man[m]<<": "<<word[w]<<endl;
            if(m==n-1)
                c=1;
            if(c==1&&w==15)
                break;
            m++;
            w++;
            if(m==n)
                m=0;
            if(w==16)
                w=0;
        }
    }
    return 0;
}
