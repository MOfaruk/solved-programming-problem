#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
    long long int n,i,a;
    while(cin>>n)
    {
        if(n==0)
            break;
        vector < long long int > ara;
        for(i=0;i<n;i++)
        {
            cin>>a;
            ara.push_back(a);
        }
        sort(ara.begin(),ara.begin()+n);
        for(i=0;i<n;i++)
        {
            cout<<ara[i];
            if(i!=n-1)
                cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}
