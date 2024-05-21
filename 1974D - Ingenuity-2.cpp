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

map<char,int> dx, dy;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    ll x = 0, y = 0;
    for(int i = 0; i < n; i++){
        x += dx[s[i]];
        y += dy[s[i]];
    }
    if(!x && !y && n==2){
        cout<<"NO\n";
        return;
    }
    if(x%2!=0 || y%2!=0){
        cout<<"NO\n";
        return;
    }
    x/=2;
    y/=2;

    cout<<"R";
    x -= dx[s[0]];
    y -= dy[s[0]];

    //cout<<x<<" "<<y<<" ";
    for(int i = 1; i < n; i++){
        if(abs(x - dx[s[i]]) < abs(x) || abs(y - dy[s[i]]) < abs(y)){
            cout<<"R";
            x -= dx[s[i]];
            y -= dy[s[i]];
        }
        else
            cout<<"H";
    }
    cout<<nl;
}


int main(){
    faster;
    dx['N'] = 1, dy['N'] = 0;
    dx['S'] = -1, dy['S'] = 0;
    dx['E'] = 0, dy['E'] = 1;
    dx['W'] = 0, dy['W'] = -1;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
