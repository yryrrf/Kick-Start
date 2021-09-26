#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int kGoodnessString(string s, int k){
    int x = 0;
    for(int i = 0; i < s.size()/2; i++){
        if(s[i]!=s[s.size()-i-1]) x++;
    }
    return abs(k-x);
}

int main() {
    int T;
    cin>>T;
    for(int i = 1; i<=T; i++){
        int N,K;
        string S;
        cin >> N >> K;
        cin >> S;
        cout<<"Case #"<<i<<": "<< kGoodnessString(S,K) <<endl;
        
    }
    return 0;
}


