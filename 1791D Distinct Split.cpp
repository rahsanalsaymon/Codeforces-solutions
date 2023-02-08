#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> prefix(n), suffix(n);
        set<char> ss;
        for(int i=0;i<n;i++){
            ss.insert(s[i]);
            prefix[i]=ss.size();
        }
        ss.clear();
        for(int i=n-1;i>=0;i--){
            ss.insert(s[i]);
            suffix[i]=ss.size();
        }
        int ans=0,m=0;
        for(int i=0;i<n-1;i++){
            ans=prefix[i]+suffix[i+1];
            m=max(m,ans);
        }
        cout<<m<<endl;
    }
}
