#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int longestArithmetic(){
    int n;
    cin>>n;
    vector<long long> vec(n);        
    for(int i = 0; i<vec.size();i++){
        cin>>vec[i];
        if(i>0){
            vec[i-1] = vec[i-1]-vec[i];
        }
    } 
        
    int ans = 1 ;
    int maxAns = 1;
    for(int i = 1; i<vec.size()-1; i++){
        if(vec[i]==vec[i-1]){
            ans++;
        }else{
            ans=1;
        }
        maxAns = max(ans,maxAns);
    }
    
    return maxAns+1;
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": "<<longestArithmetic()<<endl;    
    }
    
}