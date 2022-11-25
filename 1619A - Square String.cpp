#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int l = s.size();
        if((l % 2) != 0){
            cout<<"NO\n";
        }
        else{
            vector<char> ss1;
            vector<char> ss2;
            for(int i = 0; i < (l/2); i++){
                ss1.push_back(s[i]);
            }
            for(int i = l/2; i < l; i++){
                ss2.push_back(s[i]);
            }
            if(ss1 == ss2){cout<<"YES\n";}
            else{cout<<"NO\n";}
        }
    }
    return 0;
}
