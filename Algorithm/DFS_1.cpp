#include<bits/stdc++.h>

#define white 1
#define gray 2
#define black 3

using namespace std;

int adj[100][100];
int colour [100];
int node;
int edge;

vector < int > graph;

void dfsVisit(int x)
{
    colour[x]=gray;
    // cout<<x<< " " ;
    for(int i=0; i<node; i++)
    {
        if(adj[x][i]==1)
        {
            if(colour[i]==white)
            {   // cout<<x<< " " ;
                dfsVisit(i);

            }
        }
    }
    colour[x]=black;

     cout<<x<< " " ;
}

void dfs()
{
    for(int i=0; i<node; i++)
    {
        colour[i]=white;
    }

    for(int i=0; i<node; i++)
    {
        if(colour[i]=white)
        {
            // cout<<i<< " " ;
            cout<<endl;
            dfsVisit(i);
           // cout<<i<< " " ;
        }

    }
}



int main()
{


    cin>> node >> edge;

    int n1,n2;
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;

    }

    dfs();

  ///  for(int i=0; i<)


        /**
        5 6
        0 1
        0 2
        1 2
        1 3
        1 4
        3 4

        **/
    }
