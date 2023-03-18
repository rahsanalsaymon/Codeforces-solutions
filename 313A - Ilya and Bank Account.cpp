#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n>=0){cout<<n<<endl;}
    else{
        n = max((n/100)*10 +(n%10), n/10);
        cout<<n<<endl;
    }
}
