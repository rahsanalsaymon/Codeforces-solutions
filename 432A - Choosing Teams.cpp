#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, k;
    cin>>n>>k;
    int t[n];
    int player = 0;
 
    for (int i = 0; i < n; i++){
        cin>>t[i];
 
        if ((t[i]+k) <= 5){
            player++;
        }
    }
    cout<<player/3<<endl;
    return 0;
}
