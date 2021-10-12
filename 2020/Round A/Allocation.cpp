#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int allocation(){
    int n;
    cin>>n;
    
    int b;
    cin>>b;
    vector<int> vec(n);
    for(int i = 0; i<n; i++){
        cin>>vec[i];
    }
    
    sort(vec.begin(),vec.end());
    
    int count = 0;
    int sum = 0;
    
    for(int num : vec){
        if(sum+num<=b){
            sum+=num;
            count++;
        }
    }
    
    return count;
}

int main() {
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": " <<allocation()<<endl;
    }

}