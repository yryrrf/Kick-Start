#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

unordered_map<int,int> mp;

bool compare(int a, int b, int c){
    return b*2-a-c==0;
}

void add(int x, int y){
    int z = x+y;
    if(z%2==0) mp[z]+=1;
}

int arithmeticSquare(){
    vector<vector<int>> vec(3,vector<int>(3));
    int G;
    mp.clear();
    for(int i = 0; i<vec.size(); i++){
        for(int j = 0; j<vec[0].size(); j++){
            if(i!=1 || j!=1){
                cin>>G;
                vec[i][j] = G;
            }
        }
    }
    int ans = 0;
    
    ans += compare(vec[0][0],vec[0][1],vec[0][2]);
    ans += compare(vec[2][0],vec[2][1],vec[2][2]);
    ans += compare(vec[0][0],vec[1][0],vec[2][0]);
    ans += compare(vec[0][2],vec[1][2],vec[2][2]);
    
    
    add(vec[0][0],vec[2][2]);
    add(vec[0][1],vec[2][1]);
    add(vec[0][2],vec[2][0]);
    add(vec[1][0],vec[1][2]);
    int m = 0;
    for(auto it : mp){
        m=max(m,it.second);
    }
    
    return ans+m;
    
}


int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int ans = arithmeticSquare();
        cout<<"Case #" << i << ": " << ans <<endl;
    }
    
    
}