#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    int a, b, c, cat, dog, need;
    need = 0;
 
    for (int i = 0; i < t; i++){
        cin>>a>>b>>c>>cat>>dog;
 
        if (cat > a){
            need = need + (cat - a);
        }
        if (dog > b){
            need = need + (dog - b);
        }
        if (need <= c){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
        need = 0;
    }
    return 0;
}
