#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        if(s[1] == 'a'){
            cout<<s[0]<<" "<<s[1]<<" ";
            for(int i = 2; i < s.size(); i++){
                cout<<s[i];
            }
        }
        else{
            cout<<s[0]<<" ";
            for(int i = 1; i < s.size()-1; i++){
                cout<<s[i];
            }
            cout<<" "<<s[s.size()-1];
        }
        cout<<"\n";
    }
}
