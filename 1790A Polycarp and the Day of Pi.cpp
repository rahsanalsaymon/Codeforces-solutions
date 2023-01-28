#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    string pi = "3141592653589793238462643383279";
    
    while(t--){
        string n;
        cin >> n;
        int count = 0;
        for(int j = 0; j < n.length(); j++){
            if (n[j] == pi[j]){count++;}
            else{break;}
        }
        cout<<count<< endl;
    }
    return 0;
}

