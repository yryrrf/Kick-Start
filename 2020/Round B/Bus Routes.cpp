#include <iostream>
#include <vector>
using namespace std;

long long min(long long a, long long b){
    return a<b?a:b;
}

long long busRoutes(){
    int n;
    cin>>n;
    
    long long d;
    cin>>d;
    
    vector<long long> vec(n);
    for(int i = 0; i<vec.size(); i++) cin>>vec[i];
    
    long long ans = d;
    
    for(int i = vec.size()-1; i>=0; i--){
        ans = min(ans,ans-ans%vec[i]);
    }
    
    
    return ans;
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t;i++){
        cout<<"Case #"<<i<<": "<<busRoutes()<<endl;
    }
    
}