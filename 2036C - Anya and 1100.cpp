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


string s;
int n;
bool ok(int idx){
    if(idx<0 || idx + 3 >= n)
        return false;
    return (s[idx] == '1' && s[idx+1]=='1' && s[idx+2] == '0' && s[idx+3] == '0');
}

void solve(){
    cin>>s;
    int q;
    cin>>q;
    set<int> id;
    n = s.size();
    for(int i = 0; i < n-3; i++){
        if(ok(i)){
            id.insert(i);
        }
    }
    while(q--){
        int i;
        char v;
        cin>>i>>v;
        i--;
        for(int j = i-3; j <= i; j++){
            if(ok(j))
                id.erase(j);
        }
        s[i] = v;
        for(int j = i-3; j<= i; j++){
            if(ok(j))
                id.insert(j);
        }
    
        if(id.empty())
            cout<<"NO\n";
        else
            cout<<"YES\n";
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
