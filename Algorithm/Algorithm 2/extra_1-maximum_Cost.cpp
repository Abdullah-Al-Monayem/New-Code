#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <climits>
using namespace std;

struct Edge
{
    int src, dest, weight;
};

class Graph
{
    public:
    vector<vector<Edge>> adjlist;


    Graph(vector<Edge> const  &edges, int N)
    {
        adjlist.resize(N);

        for (auto &edge : edges)
        {
            int src=edge.src;
            int dest= edge.dest;
            int weight= edge.weight;

            adjlist[src].push_back({src,dest,weight});
            adjlist[dest].push_back({dest,src,weight});
        }
    }

};


struct Node
{
    int vertex, weight ;

    set<int> s;

};



int modifyBFS (Graph const &g,int src, int k)
{


    queue<Node> q;
    set <int >vertices;
    vertices.insert(0);

    q.push({src,0,vertices});///careful


    int maxcost= INT_MIN; ///careful


    while(!q.empty())
    {
        Node node=q.front();

        q.pop();

        int v = node.vertex;

        int cost=node.weight;

        vertices= node.s;///careful



        if(cost>k)
        {
            maxcost= max(maxcost,cost);
        }

        for(Edge edge : g.adjlist[v]) ///care
        {
            if (vertices.find(edge.dest)==vertices.end()) ///care
            {
                set<int>s =vertices;/// care

                s.insert(edge.dest);

                q.push({edge.dest,cost+edge.weight,s});
            }
        }
    }

    return maxcost;


}



int main ()
{
    vector<Edge> edges =
    {{0, 6, 11}, {0, 1, 5}, {1, 6, 3}, {1, 5, 5}, {1, 2, 7},
        {2, 3, -8}, {3, 4, 10}, {5, 2, -1}, {5, 3, 9}, {5, 4, 1},
        {6, 5, 2}, {7, 6, 9}, {7, 1, 6}
    };

    int N=9;

    Graph g(edges,N);

    int src =0;
    int cost =50;

    int maxCost =  modifyBFS(g,src,cost);

    if (maxCost!=INT_MIN)
    {
        cout<<maxCost;
    }
    else{

        cout<<"All paths from source have their costs < " <<cost;
    }

    return 0;
}
