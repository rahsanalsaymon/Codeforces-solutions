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

int check(string &x){
    int cnt = 0;
    for(int i = 0; i < x.size()-3; i++){
        if(x[i]=='1' && x[i+1]=='5'&& x[i+2]=='4' && x[i+3]=='3')
            cnt++;
    }
    return cnt;
}

void solve(){
    int n, m;
    cin>>n>>m;
    vector<string> v(n);
    for(int i = 0; i < n; i++)
        cin>>v[i];
    ll ans = 0;
    ll koyta = min(n,m)/2;
    for(int i = 0; i < koyta; i++){
        string cycle = "";

        for (int j = i; j < m - i; j++)
            cycle += v[i][j];
        for (int j = i + 1; j < n - i; j++)
            cycle += v[j][m - i - 1];
        for (int j = m - i - 2; j >= i; j--)
            cycle += v[n - i - 1][j];
    
        for (int j = n - i - 2; j > i; j--)
            cycle += v[j][i];
        
        cycle += cycle.substr(0,3);
        ans += check(cycle);
    }
    cout<<ans<<nl;
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
