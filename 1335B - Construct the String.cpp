#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string s = "abcdefghijklmnopqrstuvwxyz";
    while(t--){
        int n, a, b;
        cin>>n>>a>>b;
        while(n>0){
            int temp = b - 1;
            while(temp>=0){
                cout<<s[temp];
                temp--;
                n--;
                if(n==0){break;}
            }
        }
        cout<<"\n";
    }
}
