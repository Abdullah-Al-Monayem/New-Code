#include<bits/stdc++.h>
using namespace std;

#define MX 106
#define INF 1000000000

struct node
{
    int val;

    int cost;

};

vector<node>G[MX];

bool vis[MX];

int dis[MX];

void reset()
{
    for(int i=0; i<MX; i++)
    {
        G[i].clear();
        vis[i]=0;
        dis[i]=INF;

    }
}

class cmp
{
public:

    bool operator()(node &A, node &B)
    {
        if (A.cost>B.cost) return true;
        return false;
    }

};
void dijkstra(int source)
{
    priority_queue<node,vector<node>,cmp> PQ;

    PQ.push({source,0});


    while(!PQ.empty())
    {
        node current=PQ.top();

        PQ.pop();

        int val= current.val;
        int cost= current.cost;

        if(vis[val]==1) continue;

        dis[val]=cost;
        vis[val]=1;

        for(int i=0; i<G[val].size(); i++)
        {
            int next = G[val][i].val;
            int nextCost = G[val][i].cost;

        if(vis[next]==0)
        {
            PQ.push({next,cost+nextCost});
        }

        }
    }

}


int main()
{
    reset();

    cout<<"Enter Node And Edges : \n" ;

    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=1 ; i<=edges; i++)
    {
        int u,v,w;

        cin>>u>>v>>w;

        G[u].push_back({v,w});
    }

    cout<<"Enter Source :";
    int source;
    cin>>source;

    dijkstra(source);

     for(int i=1 ; i<=nodes; i++)
    {
        cout<<"Node "<<i<<" Distance : ";
        if(dis[i]==INF) cout<<"INF"<<"\n";
        else cout<<dis[i]<< "\n";
    }



}


/**
5 6
1 2 2
1 3 1
1 4 3
2 3 1
4 5 2
5 3 5
1

**/
