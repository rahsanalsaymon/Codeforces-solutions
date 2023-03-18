#include<bits/stdc++.h>
using namespace std;

int main(){
    string a = "qwertyuiop";
    string b = "asdfghjkl;";
    string c = "zxcvbnm,./";

    char x;
    string s;
    cin>>x>>s;
    if(x == 'R'){
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < a.size(); j++){
                if(s[i]==a[j]){
                    cout<<a[j-1];
                }
                else if(s[i]==b[j]){
                    cout<<b[j-1];
                }
                else if(s[i]==c[j]){
                    cout<<c[j-1];
                }
            }
        }
        cout<<"\n";
    }
    else{
        for(int i = 0; i < s.size(); i++){
            for(int j = 0; j < a.size(); j++){
                if(s[i]==a[j]){
                    cout<<a[j+1];
                }
                else if(s[i]==b[j]){
                    cout<<b[j+1];
                }
                else if(s[i]==c[j]){
                    cout<<c[j+1];
                }
            }
        }
        cout<<"\n";
    }
}
