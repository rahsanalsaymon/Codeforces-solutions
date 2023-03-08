#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;

        bool flag = true;
        if(n < 4) flag = false;

        for(int i = 0; i < n-1; i++){
            if(tolower(s[0]) != 'm' || tolower(s[n-1]) != 'w'){
                flag = false;
                break;
            }
            else if( tolower(s[i]) == 'm' && tolower(s[i+1]) == 'm')
                continue;
            else if( tolower(s[i]) == 'm' && tolower(s[i+1]) == 'e')
                continue;
            else if(tolower(s[i]) == 'e' && tolower(s[i+1]) == 'e')
                continue;
            else if(tolower(s[i]) == 'e' && tolower(s[i+1]) == 'o')
                continue;
            else if(tolower(s[i]) == 'o' && tolower(s[i+1]) == 'o')
                continue;
            else if(tolower(s[i]) == 'o' && tolower(s[i+1]) == 'w')
                continue;
            else if(tolower(s[i]) == 'w' && tolower(s[i+1]) == 'w')
                continue;
            else{
                flag = false;
                break;
            }
        }
        if(flag == true) cout<<"YES\n";
        else cout<<"NO\n";

    }
}
