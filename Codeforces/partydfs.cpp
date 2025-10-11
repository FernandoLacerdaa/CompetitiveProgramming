#include <bits/stdc++.h>

using namespace std;

set <int>se;

vector <vector<int>>adj;
vector <bool> visited;

vector <int> f;


int flag  =0;

int ma = 0;

vector <int>teste;

void dfs(int u, int h)
{
    visited[u] = true;

    ma = max(ma, h);  
    for(int v : adj[u])
    {
        if (!visited[v])
        {
            dfs(v, h + 1);  
        }
    }
}

int n;

int main()
{
    cin>>n;

    visited.resize(n+1, false);
    
    adj.resize(n+1);
    
    for (int i =1; i<=n; i++)
    {
        int k;cin>>k;
        
        if (k ==-1)
        {
            flag++;
            se.insert(i);
            //   cout << i <<endl;
            
        } 
        
        if (k!= -1)
        {
            adj[k].emplace_back(i);
        }
        // else if (k!=1 && k > i)
        // {
            //     adj[i].emplace_back(k);
            // }
            
        }
        
        for (int i =1; i <= n; i ++)
        {
        if (!visited[i] && se.find(i)!=se.end())
        {
            dfs (i,1);
        }
        
    }
    // for (auto l : f )
    // {
    //     cout << l <<" ";
    // }
    if (n == 1 || flag == n)
    {
        cout << 1 << endl;
    }else
    {
        cout <<ma<<endl;
    }

}
