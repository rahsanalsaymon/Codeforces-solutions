#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '3'){
                ans = 37;
                break;
            }
            if(s[i]=='7'){
                ans = 73;
                break;
            }
        }
        cout<<ans<<"\n";
    }
}
