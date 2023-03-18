#include<bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);

    string s;
    cin>>s;
    int l = 0;
    for(int i = 0; i < s.size(); i++){
        if(l > 1){break;}
        if(islower(s[i])){l++;}
    }
    if(l<1){
        for(int i = 0; i < s.size(); i++){
            cout<< (char)tolower(s[i]);
        }
        cout<<"\n";
    }
    else if(l == 1 && islower(s[0])){
        cout<< (char)toupper(s[0]);
        for(int i = 1; i < s.size(); i++){
            cout<< (char)tolower(s[i]);
        }
        cout<<"\n";
    }
    else cout<<s<<"\n";
}
