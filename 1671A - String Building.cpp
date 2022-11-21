#include<bits/stdc++.h>
using namespace std;

int main(void){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int a = 0;
        int b = 0;
        for(int i = 0; i < s.size(); i++){
            if(s[i]=='a' && s[i-1] != 'a' && s[i+1] != 'a'){
                cout<<"NO\n";
                a++;
                break;
            }
            else if(s[i]=='b' && s[i-1] != 'b' && s[i+1] != 'b'){
                cout<<"NO\n";
                b++;
                break;
            }
            else{
                continue;
            }
        }
        if(a==b){cout<<"YES\n";}
    }
}
