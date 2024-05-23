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


vector<pair<int, int>> v;
unordered_set<int> divs;
bool can(ll g){
    for(int i = 0; i < v.size(); i++){
        //cout<<v[i].first<<" "<<v[i].second<<nl;
        if(((v[i].first % g)!=0) && ((v[i].second % g)!=0))
            return false;
    }
    return true;
}

void getdiv(int n){
    int x = sqrt(n);
    for(int i = 2; i<=x; i++){
        if(n%i==0){
            while(n%i==0)
                n/=i;
            divs.insert(i);
        }
    }
    if(n>1) divs.insert(n);
}
void solve(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin>>x>>y;
        v.push_back({x,y});
    }
    getdiv(v[0].first);
    getdiv(v[0].second);
    for(auto i : divs){
        if(can(i)){
            cout<<i<<nl;
            return;
        }
    }
    cout<<-1<<nl;
}


int main(){
    faster;
    
    solve();
    
}
