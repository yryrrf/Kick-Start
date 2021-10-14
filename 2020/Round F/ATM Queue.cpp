#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        int n;
        cin>>n;
        long long x;
        cin>>x;
        vector<long long> vec(n);
        for(int j = 0; j<vec.size(); j++) cin>>vec[j];
        vector<pair<long long, int>> queue;
        for(int j = 0; j<vec.size(); j++){
            queue.push_back({(vec[j]-1)/x,j});
        }
        sort(queue.begin(),queue.end());
        cout<<"Case #"<<i<<":";
        for(auto& it:queue){
            cout<<" "<<it.second+1;
        }
        cout<<endl;
    }
}