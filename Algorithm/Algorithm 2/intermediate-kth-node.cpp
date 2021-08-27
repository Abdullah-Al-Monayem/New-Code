#include <bits/stdc++.h>

using namespace std;

int findShortestPath(
    int n, vector<vector<int> >& edges,int src, int dst, int K)
{

    vector<vector<pair<int, int> > > adjlist(n, vector<pair<int, int> >());


    queue<pair<int, int> > q;

    unordered_map<int, int> mp;


    int ans = INT_MIN;


    for (int i = 0; i < edges.size(); i++)
    {

        auto edge = edges[i];

        adjlist[edge[0]].push_back(
            make_pair(edge[1], edge[2]));
    }


    q.push({ src, 0 });

    int level = 0;


    while (!q.empty() && level < K + 2)
    {


        int sz = q.size();

        for (int i = 0; i < sz; i++)
        {


            auto pr = q.front();


            q.pop();


            if (pr.first == dst)
                ans = max(ans, pr.second);


            for (auto pr2 : adjlist[pr.first])
            {


                if (mp.find(pr2.first)
                        == mp.end()
                        || mp[pr2.first]
                        > pr.second
                        + pr2.second)
                {


                    q.push({ pr2.first,
                             pr.second
                             + pr2.second });
                    mp[pr2.first] = pr.second
                                    + pr2.second;
                }
            }
        }


        level++;
    }


    return ans != INT_MIN ? ans : -1;
}

int main()
{

    int n,src,dst,k;

    cin>>n>>src>>k;

    vector< vector<int> > edges;

    for(int i=0; i<n; i++)
    {

        int u,v,w;

        cin>>u>>v>>w;

        vector< int > edge;

        edge.push_back(u);
        edge.push_back(v);
        edge.push_back(w);

        edges.push_back(edge);

    }

    cout<<findShortestPath( n,edges,src,dst,k );

}

