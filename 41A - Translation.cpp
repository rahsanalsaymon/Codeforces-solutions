#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s, t;
    cin>>s>>t;
    string x = s;
    int n = s.size();
    for(int i = 0; i < n; i++){
        x[(n-1)-i] = s[i];
    }
    if (x == t){cout<<"YES\n";}
    else{cout<<"NO\n";}
    return 0;
}
