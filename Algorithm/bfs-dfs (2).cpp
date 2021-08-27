#include<iostream>
#include<vector>
#include<queue>
#include<stack>
using namespace std;

void edge(vector<int>adj[],int u,int v){
  adj[u].push_back(v);
  adj[v].push_back(u);
}

void bfs(int s,vector<int>adj[],bool visit[]){
  queue<int>q;
  q.push(s);
  visit[s]=true;
  while(!q.empty()){
    int u=q.front();
    cout<<u<<" ";
    q.pop();

    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        q.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}

void dfs(int s,vector<int>adj[],bool visit[]){
  stack<int>stk;
  stk.push(s);
  visit[s]=true;
  while(!stk.empty()){
    int u=stk.top();
    cout<<u<<" ";
    stk.pop();

    for(int i=0;i<adj[u].size();i++){
      if(!visit[adj[u][i]]){
        stk.push(adj[u][i]);
        visit[adj[u][i]]=true;
      }
    }
  }
}

int main(){
  vector<int>adj[8];
  bool visit[8];

  for(int i=0;i<5;i++){
    visit[i]=false;
  }
   /**
  edge(adj,0,1);
  edge(adj,0,2);
  edge(adj,1,3);
  edge(adj,2,3);
  edge(adj,2,4);
  edge(adj,2,0);

  7 9
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

  edge(adj,1,2);
  edge(adj,1,3);
  edge(adj,1,7);
  edge(adj,2,3);
  edge(adj,2,4);
  edge(adj,3,7);
  edge(adj,3,6);
  edge(adj,4,5);
  edge(adj,5,6);


  cout<<"BFS traversal is"<<"  ";

 // bfs(0,adj,visit);
  bfs(1,adj,visit);
  cout<<endl;

  for(int i=0;i<5;i++){
    visit[i]=false;
  }
  cout<<"DFS traversal is"<<"  ";

  dfs(0,adj,visit);
}
