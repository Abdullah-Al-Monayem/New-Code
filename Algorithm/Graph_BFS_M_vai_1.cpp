#include<bits/stdc++.h>

using namespace std;


/* visited nonVisited and visit[100] are global array
    visited = 1,nonVisited = 0
    */
int  visit[100];

int visited = 1,notVisited = 0  ;

void input( vector<int> v[],int node)
{
    for(int i = 0; i < node; i++)
    {
        cout << "Enter Edge for node "<<i<<" :";
        int edge;
        cin >> edge;
        for(int j = 0; j < edge; j++)
        {
            int temp;
            cin >> temp;
            v[i].push_back(temp);
        }
    }


    for (int i=0; i<node; i++)
    {
        cout << "parent node "<< i<<" : ";
        for(int j=0; j<v[i].size(); j++)
        {
            cout<<v[i][j]<< " ";
        }
        cout << endl;
    }

}

void bfs(vector<int> v[],int source)
{

    queue<int> q;
    int x, s;
    cout << "\nEnter BFS starting node : ";
    cin >> s;
    q.push(s);
    visit[s] = visited;
    cout << "\nVisited node : ";
    while (q.size())
    {
        x = q.front();
        cout << " " << x;
        q.pop();
        for (int i = 0; i < v[x].size(); i++)
        {
            if (visit[v[x][i]] == notVisited)
            {
                q.push(v[x][i]);
                visit[v[x][i]] = visited;
            }
        }
    }




}







int main()
{

    int node ;

    cin>> node;
    vector<int> g[100];

     input(g, node);

     bfs(g, 0);



    /*
    6
    1 2
    3 4
    5
    0
    0
    0
    */
    /*0 12 345*/

    /*
        BFS


    /*
    0
    12
    235
    */



    return 0;
}

