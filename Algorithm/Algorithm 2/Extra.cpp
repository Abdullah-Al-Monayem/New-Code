#include <bits/stdc++.h>
#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <climits>
using namespace std;


struct Edge
{

   int src,dest, weight;
};

class Graph
{
public:
    vector<vector<Edge>> adjList;

    Graph(vector<Edge> const edges, int N)
    {
        adjList.resize(N);

        for(auto &edge : edges)
        {
            int src=edge.src;
            int dest = edge.dest;
            int weight= edge.weight;

            adjList[src].push_back({src,dest,weight});
            adjList[dest].push_back({dest,src,weight});
        }
    }


};



struct Node
{

    int vertex, weight ;

    set<int> s;

};


int modifiedBFS (Graph const &g, int src, int k)
{
    queue<Node> q;



    set<int> vertices;

    vertices.insert(0);


    q.push({src,0,vertices});

    int Maxcost =INT_MAX;

    while(!q.empty())
    {

        Node node= q.front();

                   q.pop();

        int v = node.vertex;

        int cost = node.weight;

        set<int> vertices;

        vertices=node.s;


        if(cost>k)
        {
            Maxcost=max(cost,k);
        }


        for(Edge edge : g.adjList[v] )
        {
            if(vertices.find(edge.dest)== vertices.end())
            {
                set<int> s =vertices;
                s.insert(edge.dest);

                q.push({edge.dest,cost+edge.weight,s});


            }
        }


    }


    return Maxcost;
}



int main ()
{

    vector<Edge> edges;

    int e;

    cin>>e;

    edges.resize(e+1);
     for (int i = 0; i < e; i++)
    {
        int a, b,c;
        cin>>a>>b>>c;

         edges[i]={a,b,c};
        // cout<<arr[i].area()<<endl;
    }


   int N=9;

    Graph g(edges,N);

    int src =0;
    int cost =50;

    int maxCost =  modifiedBFS(g,src,cost);

    if (maxCost!=INT_MIN)
    {
        cout<<maxCost;
    }
    else{

        cout<<"All paths from source have their costs < " <<cost;
    }

    return 0;



}



/**

13
0 6 11
0 1 5
1 6 3
1 5 5
1 2 7
2 3 -8
3 4 10
5 2 -1
5 3 9
5 4 1
6 5 2
7 6 9
7 1 6


**/
