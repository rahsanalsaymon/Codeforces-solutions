#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "codefrs";
    int t;
    cin>>t;
    while(t--){
        char c;
        bool flag = false;
        cin>>c;
        for(int i = 0; i < 7; i++){
            if(c == s[i]){
                cout<<"YES\n";
                flag = true;
                break;
            }
        }
        if(flag==false){cout<<"NO\n";}
    }
}
