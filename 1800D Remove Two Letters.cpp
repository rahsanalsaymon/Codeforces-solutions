#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        s += "!";
        int ans = 0;
        for(int i = 0; i+1 < n; i++){
            if(s[i] != s[i+2])
                ans++;
        }
        cout<<ans<<"\n";
    }
}
