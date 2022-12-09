#include<bits/stdc++.h>
using namespace std;



int main() {
    string s;
    cin>>s;

    string x;
    char a = s[0];

    for (int i = 1; i < s.length(); i++){
        a = max(a, s[i]);
    }
    for (int i = 0; i < s.length(); i++){
        if (s[i] == a)
            x += s[i];
    }
    cout<<x<<endl;
}

