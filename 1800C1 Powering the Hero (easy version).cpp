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
        int x;
        priority_queue<int> cards;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            cin>>x;
            if(x == 0 && !cards.empty()){
                ans += cards.top();
                cards.pop();
            }
            else
                cards.push(x);
        }
        cout<<ans<<"\n";
    }
}
