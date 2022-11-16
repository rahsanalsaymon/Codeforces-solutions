#include<bits/stdc++.h>
using namespace std;
 
int main(){
    string s;
    cin>>s;
    string x = "hello";
    int j = 0;
    int letters = 0;
 
    for (int i = 0; i < s.size(); i++){
        if (s[i] == x[j]){
            j++;
            letters++;
        }
    }
    if(letters==5){cout<<"YES\n";}
    else{cout<<"NO\n";}
}
