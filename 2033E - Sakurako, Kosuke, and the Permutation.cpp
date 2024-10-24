#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; i++)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
 
const double PI = 3.141592653589793238462643383279502884197;
const int N = (int)1e6 + 5;
const ll inf = (ll)1e18 + 5;
const int mod = (int)1e9 + 7;


void solve(){
    int n;
    cin>>n;
    vector<int> v(n+1);
    for(int i = 1; i <= n; i++){
        cin>>v[i];
    }
    ll spoil = 0;
    for(int i = 1; i <= n; i++){
        if(v[i]== i || v[v[i]]==i){
            spoil++;
            //cout<<i<<nl;
        }
    }
    if(spoil == n)
        cout<<0<<nl;
    else{
        vector<bool> visited(n+1, 0);
        ll round = 0;
        ll swap = 0;
        for(int i = 1; i <= n; i++){
            if(!visited[i]){
                int size = 0;
                int curr = i;
                while(!visited[curr]){
                    visited[curr] = 1;
                    curr = v[curr];
                    size++;
                }
                if(size>=3){
                    round++;
                    swap += (size-1)/2;
                }
            }
        }
        cout<<swap<<nl;
    }
}


int main(){
    faster;
    //#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
    //#endif
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
