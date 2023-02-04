#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int x = 0, y = 0;
        bool flag = false;

        for(int i = 0; i < n; i++){
            if(s[i]=='U'){y++;}
            else if(s[i]=='D'){y--;}
            else if(s[i]=='R'){x++;}
            else if(s[i]=='L'){x--;}

            if(x == 1 && y == 1){
                cout<<"YES\n";
                flag = true;
                break;
            }
        }
        if(flag==false){cout<<"NO\n";}
    }
}
