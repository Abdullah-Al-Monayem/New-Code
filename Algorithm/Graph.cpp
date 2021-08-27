#include<bits/stdc++.h>

using namespace std;

void input( vector<int> g[],int node)
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
            g[i].push_back(temp);
        }
    }


    for (int i=0; i<node; i++)
    {
        cout << "parent node "<< i<<" : ";
        for(int j=0; j<g[i].size(); j++)
        {
            cout<<g[i][j]<< " ";
        }
        cout << endl;
    }

}

void bfs(vector<int> &g,int source)
{
//    queue<int> q;
//
//    q.push(source)
//
//    int x= q.front();
//
//    q.pop();

    while(true)
    {
        int i;
        for(int j=0; j<g[i].size(); j++)
        {
            cout<<g[i][j]<< " ";
        }
        cout << endl;

        i++;


    }

//

  //  for(i=0;, )




}







int main()
{

    int node ;

    cin>> node;
    vector<int> g[node];

    input(g, node);

    bfs(g, node);



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
