//dfs
#include <bits/stdc++.h>
using namespace std;
int adj[100][100];
vector<char>g[10000];
int visit[100];
void dfs(char u){
visit[u]=1;
cout<<u<<" ";
for(int i=0;i<g[u].size();i++){
        int v=g[u][i];
    if(visit[v]==0){
        dfs(v);}
}
}
int main(){
    int n,e,i,j;
    char u,v;
    //input taking in graph//
    cout<<"Number of node:";
    cin>>n;
    cout<<"Number of edge:";
    cin>>e;
    for(int i=0;i<e;i++){
        cin>>u>>v;
        g[u].push_back(v);
      //g[v].push_back(u);
      adj[u-'a'][v-'a']=1;
    // adj[v-'a'][u-'a']=1;
    //adj[u][v]=1;
    //adj[v][u]=1;
    }
    cout<<"ADJACENCY MATRIX:"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    //end input taking//
    cout<<"DFS:";
    dfs('a');
    //dfs(0);
}
//input 0 1 0 2 1 2 2 0 2 3 3 3
//output:0 1 2 3
//input a b a c b c c a c d d d
//output:a b c d
