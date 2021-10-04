#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int festival(){
    int d;
    cin>>d;
    
    int n;
    cin>>n;
    
    int k;
    cin>>k;
    
    vector<vector<int>> vec(d+1,vector<int>(k,0));
    
    for(int i = 1; i<=n; i++){
        int h;
        cin >> h;
        
        int s;
        cin>> s;
        
        int e;
        cin>>e;
        
        for(int j = s; j<=e; j++){
            sort(vec[j].rbegin(),vec[j].rend());
            if(h>vec[j][vec[j].size()-1]){
                vec[j].pop_back();
                vec[j].push_back(h);
            }
        }
    }
    
    long ans = 0;
    for(int i = 0; i<vec.size(); i++){
        long total = 0;
        for(int j = 0; j<vec[i].size(); j++){
            total+=vec[i][j];
        }
        if(total>ans){
            ans = total;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": "<<festival()<<endl;
    }
    
}