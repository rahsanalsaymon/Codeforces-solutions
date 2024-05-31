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
    int n, m;
    cin>>n>>m;
    vector<pair<int, int>> v(n+m+1);
    for(int i = 0; i < (n+m+1); i++){
        cin>>v[i].ff;
    }
    for(int i = 0; i < (n+m+1); i++){
        cin>>v[i].ss;
    }
    
    vector<int> v1, v2;
    ll ans = 0;
    for(int i = 0; i < n+m+1; i++){
        if(v[i].ff>v[i].ss)
            v1.push_back(i);
        else
            v2.push_back(i);
    }
    //assuming n>m
    if(v2.size()>m){
        swap(n,m);
        swap(v1,v2);
        for(int i = 0; i < n+m+1; i++)
            swap(v[i].ff,v[i].ss);
    }
    while(v1.size()>n+1){
        v2.push_back(v1.back());
        v1.pop_back();
    }
    int extra = v1.back();
    v1.pop_back();
    for(auto i : v1)
        ans+=v[i].ff;
    for(auto i : v2)
        ans+=v[i].ss;
    
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    for(int i = 0; i < n+m+1; i++){
        if(*(lower_bound(v1.begin(),v1.end(),i)) == i){
            cout<<ans-(v[i].ff)+v[extra].ff<<" ";
        }
        else if(*(lower_bound(v2.begin(),v2.end(),i)) == i){
            cout<<ans-(v[i].ss)+v[extra].ss<<" ";
        }
        else
            cout<<ans<<" ";
    }
    cout<<nl;
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
