#include <iostream>
#include <vector>
using namespace std;

long long countDown(){
    long long n;
    cin>>n;
    long long k;
    cin>>k;
    vector<long long> vec(n);
    for(long long i = 0; i<n; i++){
        cin>>vec[i];
    }
    long long ans;
    long long counter = 0;
    for(long long i = 1; i<vec.size(); i++){
        if(vec[i] == vec[i-1]-1){
            counter++;
        }else{
            counter = 0;
        }
        
        if(counter>=k-1 && vec[i]==1){
            ans++;
        }
    }
    
    
    return ans;
    
}


int main(){
    int t;
    cin>>t;
    for(int i=1; i<=t;i++){
        cout<<"Case #"<< i <<": "<< countDown()<<endl;
    }
    

}