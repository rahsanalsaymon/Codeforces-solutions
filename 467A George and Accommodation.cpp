#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n, p, q, room;
    cin>>n;
    room = 0;
    while(n--){
        cin>>p>>q;
        if ((q - p) >= 2){
            room++;
        }
    }
    cout<<room<<endl;
}
