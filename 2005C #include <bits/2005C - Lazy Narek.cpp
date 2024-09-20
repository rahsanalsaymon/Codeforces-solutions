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

int n, m;
string s = "narek";
int f(vector<string> &a,vector<vector<int>> &dp, int st, int letter){
    if(st == n) return letter*(-2);
    if(dp[st][letter]!=-1)  return dp[st][letter];

    int skip = f(a,dp, st+1, letter);
    int take = 0, idx = letter;
    for(auto &i : a[st]){
        if(i == s[idx]){
            idx = (idx+1)%5;
            take++;
        }
        else if(i == 'n' || i == 'a' || i == 'r' || i == 'e' || i == 'k') take--;
    }
    take += f(a,dp,st+1,idx);
    return dp[st][letter] = max(skip,take);
}

void solve(){
    cin>>n>>m;
    vector<string>a(n);
    for(int i = 0; i < n; i++)
        cin>>a[i];
    vector<vector<int>> dp(n, vector<int>(5,-1));
    cout<<f(a,dp,0,0)<<nl;
}


int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
