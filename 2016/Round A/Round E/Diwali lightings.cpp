#include <iostream>
#include <string>
using namespace std;

long long findNum(long long i, long long j, string s, long long cntB){
    long long ans;
    if(j%s.size()==0){
        ans = j/s.size()*cntB;
    }else{
        long long remain = j%s.size();
        ans = findNum(i,j-remain,s,cntB);
        for(long long i = 0; i<remain; i++){
            if(s[i]=='B') ans++;
        }
    }
    return ans;
}

void solve(){
    string s;
    cin>>s;
    long long i, j;
    cin>>i;
    cin>>j;
    
    long long cntB=  0;
    for(char c:s){
        if(c=='B') cntB++;
    }
    long long ans;
    if(i==1){
        ans = findNum(i,j,s,cntB);
    }else{
        ans = findNum(1,j,s,cntB)-findNum(1,i-1,s,cntB);
    }
    cout<<ans;
    
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
}