#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, ss;
        cin>>s>>ss;
        bool yes = 0;
        for(int i = 0; i < s.size()-1; i++){
            if(s[i]=='0' && ss[i]=='0' && s[i+1]=='1'&& ss[i+1]=='1')
                yes = 1;
        }
        if(yes)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
