#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int word = 0;
    int wub = 0;

    for (int i = 0; i < s.size(); i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i += 2;
            wub++;
            if(word > 0 && wub < 2){
                cout<<" ";
            }
        }
        else{
            cout<<s[i];
            word++;
            wub = 0;
        }
    }
    cout<<endl;
}
