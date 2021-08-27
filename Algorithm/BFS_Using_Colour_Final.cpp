#include<bits/stdc++.h>
using namespace std;

#define WHITE 0
#define GRAY 1
#define BLACK 2
#define SIZE 100

int adj[SIZE][SIZE];
int colour[SIZE];
int parent[SIZE];
int dis[SIZE];

void bfs(int adj[][SIZE], int vertex, int startingNode);
void printPath(int startingNode, int endNode);

void printPathRecursive(int source, int node)
{
    if (node == source)
    {

        /// cout<<endl<<"C:"<<node<<endl;
        cout << node << " "; // print from source
        return;
    }

/// cout<<endl<<"C:"<<node<<endl;
    printPathRecursive(source, parent[node]);
    cout << node << " ";
}
int main()
{


    // freopen("input.txt" , "r" , stdin);
    int vertex;
    int edge;
    cin >> vertex >> edge;
    cout << "Vertex is : " << vertex <<endl;
    cout << "Edge is : " << edge <<endl;

    int node1,node2;
    for(int i = 0 ; i< edge ; i++)
    {

        cin >> node1 >> node2;
        adj[node1][node2] = 1;
        adj[node2][node1] = 1;

    }
    for(int i = 0 ; i < vertex ; i++)
    {
        for(int j = 0 ; j < vertex ; j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }

    int source ;
    cout<<"Source : " <<endl;
    cin>>source;
    bfs(adj, vertex, source);
    cout << endl;

    for (int i = 1; i < vertex; i++)
    {
        cout << "Path from " << i << " to source: ";
        printPathRecursive(source, i);
        cout << endl;
    }


}

void bfs(int adj[][SIZE], int vertex, int startingNode)
{
    for(int i = 0 ; i < vertex ; i++)
    {
        if(i!= startingNode)
        {
            colour[i] = WHITE;
            dis[i] = INT_MIN; //Infinity
            parent[i] = -1; // Null
        }
    }

    colour[startingNode] = GRAY;
    dis[startingNode] = 0;
    parent[startingNode] = -1; //Null
    queue <int> bfsQueue;
    bfsQueue.push(startingNode);
    cout << "BFS is : ";
    while(!bfsQueue.empty())
    {
        int u = bfsQueue.front();
        cout << u << " ";
        bfsQueue.pop();
        for(int i = 0 ; i < vertex ; i++)
        {
            if(adj[u][i]!=0)
            {
                int v = i;
                if(colour[v] == WHITE)
                {
                    colour[v] = GRAY;
                    dis[v] = dis[u]+1;
                    parent[v] = u;


                    // cout<<endl;
                    // cout << "parent of " << v << " is " << parent[v] << endl;
                    //  cout<<endl;

                    bfsQueue.push(v);
                }
            }
        }
        colour[u] = BLACK;
    }

}


/**

input:      node+1 dite hobe
    8 9
    1 2
    1 3
    1 7
    2 3
    3 7
    2 4
    4 5
    3 6
    5 6
    1
**/
