#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main()
{
    int i,n,e;
    while(cin>>n)
    {
        if(n==0)
            break;
        cin>>e;
        vector<int> node[205];
        queue<int> q;
        int color[205]={0},b=0;
        int x,y;
        for(i=0; i<e; i++)
        {
            cin>>x>>y;
            node[x].push_back(y);
            node[y].push_back(x);
        }
        q.push(0);
        color[0]=1;
        while(!q.empty())
        {
            int f = q.front();
            for(i=0; i<node[f].size(); i++)
            {
                int g=node[f][i];
                if(color[g]==0)
                {
                    q.push(g);
                    if(color[f]==1)
                        color[g]=2;
                    else
                        color[g]=1;
                }
                else if(color[g]==color[f])
                {
                    b=1;
                    break;
                }
            }
            q.pop();
            if(b==1)
                break;
        }
        if(b==1)
            cout<<"NOT BICOLORABLE."<<endl;
        else
            cout<<"BICOLORABLE."<<endl;
    }
    return 0;
}

