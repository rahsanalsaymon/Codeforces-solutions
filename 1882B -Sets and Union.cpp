#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<set<int>> v(n);
        set<int> allset;
        for(int i = 0; i < n; i++){
            int a;
            cin>>a;
            while(a--){
                int x;
                cin>>x;
                v[i].insert(x);
                allset.insert(x);
            }
        }
        int ans = 0;
        for(auto x : allset){
            set<int> s;
            for(int i = 0; i <n; i++){
                if(v[i].find(x)!=v[i].end())
                    continue;
                for(auto j: v[i])
                    s.insert(j);
            }
            if(s.size()!=allset.size())
                ans = max(ans, (int)s.size());
        }
        cout<<ans<<"\n";
    }
}
