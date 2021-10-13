#include <iostream>
#include <vector>
using namespace std;

int recordBreaker(){
    int n;
    cin>>n;
    vector<int> vec(n);
    for(int i = 0; i<vec.size(); i++) cin>>vec[i];
    int ans = 0;
    
    bool preDay = false;
    bool folDay = false;
    
    int record = 0;
    
    for(int i = 0; i<vec.size(); i++){
        if(i==0 || vec[i]>record){
            preDay = true;
            record = vec[i];
        }else{
            preDay = false;
        }
        
        if(i==vec.size()-1 || vec[i]>vec[i+1]){
            folDay = true;
        }else{
            folDay = false;
        }
        
        if(preDay && folDay) ans++;
    }
    return ans;
    
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": "<< recordBreaker()<<endl;
    }
    
}