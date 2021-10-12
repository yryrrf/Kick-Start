#include <iostream>
#include <vector>
using namespace std;

int bikeTour(){
    int n;
    cin>>n;
    int ans=0;
    vector<int> vec(n);
    int h;
    for(int i = 0; i<n;i++) cin>>vec[i];
    for(int i = 1; i<n-1;i++){
        if(i!=0 && i!=n-1 && vec[i]>vec[i-1] && vec[i]>vec[i+1]) ans++;
    }
    
    return ans;
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": "<<bikeTour()<<endl;
    
    }

}