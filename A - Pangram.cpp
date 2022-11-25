#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count = 0;
    if(n<26){cout<<"NO\n";}
    else{
        for(int i = 0; i < n; i++){
            s[i] = tolower(s[i]);
        }
        sort(s.begin(), s.end());
        for(int i = 0; i < n; i++){
            if(s[i]==s[i+1]){
                count++;
            }
        }
        if((n-count)==26){cout<<"YES\n";}
        else{cout<<"NO\n";}
    }
}
