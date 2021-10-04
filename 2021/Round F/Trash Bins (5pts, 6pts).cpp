#include <iostream>
#include <string>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

long trashBins() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    vector<int> left(n);
    vector<int> right(n);
    
    int index = INT_MIN;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='1'){
            index = i;
        }
        left[i] = index;
    }
    
    index = INT_MAX;
    for(int i = s.size()-1; i>=0; i--){
        if(s[i]=='1'){
            index = i;
        }
        right[i] = index;
    }
    
    long ans = 0;
    for(int i = 0; i<n; i++){
        if(left[i]<0){
            ans+=right[i]-i;
        }else{
            ans+=min(i-left[i],right[i]-i);
        }
    }
    
    return ans;
}


int main() {
    int t;
    cin >> t;
    for(int i  = 1; i<=t; i++){
        cout<<"Case #"<<i<<": "<<trashBins()<<endl;    
    }
    
}