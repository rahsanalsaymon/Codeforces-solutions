
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char s[8][8];
        string ans = "";
        for(int i=0; i < 8; i++){
            for(int j=0; j < 8; j++){
                cin>>s[i][j];
            }
        }
        for(int i=0; i < 8; i++){
            for(int j=0; j < 8; j++){
                if(s[i][j] != '.'){
                    ans += s[i][j];
                    i++;
                    j--;
                }
                if(i==8)
                    break;
            }
        }
        cout<<ans<<"\n";
    }
}

