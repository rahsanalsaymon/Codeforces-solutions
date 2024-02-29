#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef __int128 lll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
 
#define all(t) t.begin(), t.end()
#define rall(t) t.rbegin(), t.rend()
#define forr(x, n) for (int i = x; i < n; i++)
#define ff first
#define ss second
#define pb push_back
#define nl '\n'
#define sp << ' ' <<
#define print_ara(x, st, ed)      \
    for (int i = st; i < ed; i++) \
        cout << x[i] << " \n"[i == ed - 1];
#define print_map(t) \
    for (auto u : t) \
        cout << u.ff << " -> " << u.ss << nl;
#define faster                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                 \
    cout.tie(0);
 
const int N = (int)1e6 + 5;
const ll inf = (ll)1e18 + 5;
const int mod = (int)1e9 + 7;

int main(){
    faster;
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i = 0; i < n ;i++)
            cin>>a[i];
        sort(a,a+n);
        ll mini = a[0];
        int same = 1;
        for(int i = 1; i < n; i++){
            if(a[i]==mini){
                same++;
            }
        }
        if(same == n){
            cout<<"NO\n";
        }
        else if(same==1){
            cout<<"YES\n";
        }
        else{
            bool ok = false;
            for(int i = 0; i < n; i++){
                if(a[i] != mini && (a[i]%mini)){
                    ok = true;
                    break;
                }
            }
            if(ok)
                cout<<"YES\n";
            else
                cout<<"NO\n";
        }
    }
}
