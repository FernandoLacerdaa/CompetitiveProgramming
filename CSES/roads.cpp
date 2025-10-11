#include <bits/stdc++.h>
 
using namespace std;
 
 
vector<vector<int>>adj;
vector<bool>visited;
 
void dfs (int u){
    visited[u] = true;
    for (int v: adj[u]){
        if (!visited[v]) dfs(v);
    }
}
 
 
int main(){
 
    int n, c;cin>>n>>c;
 
    adj.resize(n+1);
    visited.resize(n+1, false);
 
    for (int i=0; i<c;i++){
        int a,b;cin>>a>>b;
        adj[a].emplace_back(b);
        adj[b].emplace_back(a);
    }
 
    int components = 0;
 
    vector<int> idk;
 
 
    for (int i =1; i<=n; i++){
        if (!visited[i]){
            idk.emplace_back(i);
            components++;
            dfs(i);
        }
    }
    cout << components-1<<endl;
 
    if (components != 1){
 
        for (int i=1; i<idk.size();i++){
            cout << idk[i-1] << " "<< idk[i]<<endl;
        }
    }
}