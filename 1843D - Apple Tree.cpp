#include<bits/stdc++.h>
using namespace std;

long long dfs(int i, int j, vector<vector<int>>&adj, vector<long long>&value){
    long long cnt = 0;
    for(auto child: adj[i]){
        if(child != j)
            cnt+=dfs(child, i, adj, value);
    }
    if(cnt==0 && adj[i].size()==1)
        cnt++;
    value[i]=cnt;
    return cnt;
}
int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> adj(n+1);
        vector<long long> value(n+1);
        for(int i = 1; i < n; i++){
            int u,v;
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        dfs(1,1, adj , value);
        int q;
        cin>>q;
        for(int i = 0; i <q; i++){
            int x,y;
            cin>>x>>y;
            cout<<value[x]*value[y]<<"\n";
        }
    }
}

