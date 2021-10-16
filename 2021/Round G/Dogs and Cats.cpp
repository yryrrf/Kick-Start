#include <iostream>
#include <string>
using namespace std;

void solve(){
    long long n,d,c,m;
    cin>>n;
    cin>>d;
    cin>>c;
    cin>>m;
    string s;
    cin>>s;
    bool flag = false;
    int ans = 1;
    for(long long i = 0; i<n; i++){
        if(s[i]=='D'){
            if(d){
                --d;
                c+=m;
            }else{
                flag = true;
            }
        }else{
            if(c){
                --c;
            }else{
                flag = true;
            }
        }
        if(flag&&s[i]=='D'){
            ans = 0;
        }
    }
    if(ans){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i = 0;i<t;i++){
        cout<<"Case #"<<i+1<<": ";
        solve();
    }
}