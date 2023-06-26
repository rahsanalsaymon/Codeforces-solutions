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
        int a[n];
        int line = 0;
        int cnt = 1;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            if(a[i]==0)
                line++;
        }
        sort(a, a+n);
        bool ans = true;
        for(int i = 0; i < n; i++){
            if(a[i]==a[i+1])
                cnt++;
            else{
                if(cnt>line || line == 0){
                    ans = false;
                    break;
                }
                else if(a[i+1] != a[i]+1  && i < n-1){
                    ans = false;
                }
                else{
                    line = cnt;
                    cnt = 1;
                }
            }
        }
        if(ans && line != 0)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}

