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
        int count = 0;
        for(int i = 0; i < n/2; i++){
            if((s[0+i]=='1' && s[n-1-i]=='0') || (s[n-1-i]=='1' &&  s[0+i]=='0')){
                count += 2;
            }
            else{
                break;
            }
        }
        cout<<s.size() - count<<endl;
    }
}
