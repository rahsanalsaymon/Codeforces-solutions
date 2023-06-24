#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    string ans = "";
    cin>>s;
    for(int i = 0; i < s.size(); i++){
        if(s[i]=='.')
            ans += "0";
        else if(s[i+1]=='.'){
            ans += "1";
            i++;
        }
        else if(s[i+1]=='-'){
            ans += "2";
            i++;
        }
    }
    cout<<ans<<endl;
}
