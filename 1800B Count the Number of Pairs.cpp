#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int l[26] = {0};
        int u[26] = {0};

        for(int i = 0; i < n; i++){
            if(s[i] < 'a'){
                u[s[i] - 'A']++;
            }
            else{
                l[s[i] - 'a']++;
            }
        }
        int ans = 0;
        for(int i = 0; i < 26; i++){
            ans += min(l[i], u[i]);
            int diff = abs(l[i] - u[i]) / 2;
            ans += min(k, diff);
            k -= min(k, diff);
        }
        cout<<ans<<"\n";
    }
}
