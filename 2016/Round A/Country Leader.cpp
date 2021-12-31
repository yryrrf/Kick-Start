#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int countDiff(string s){
    unordered_set<char> us;
    int ans = 0;
    for(char c:s){
        if(!us.count(c) && c!=' '){
            ans++;
            us.emplace(c);
        }
    }
    return ans;
}

void solve(){
    int n;
    cin>>n;
    int maxDiff = 0;
    string leader = "";
    cin.ignore();
    for(int i = 1; i<=n; i++){
        string tmp;
        getline(cin,tmp);
        int currDiff = countDiff(tmp);
        if(currDiff>maxDiff){
            leader = tmp;
            maxDiff = currDiff;
        }else if(currDiff == maxDiff){
            int size = min(tmp.size(),leader.size());
            for(int i = 0; i<size; i++){
               if(tmp[i]-'A' < leader[i]-'A'){
                    leader = tmp;
                    maxDiff = currDiff;
                    break;
                }else if(tmp[i]-'A'>leader[i]-'A'){
                    break;
                } 
            }
        }
    }
    cout<<leader;
    
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i<=t; i++){
        cout<<"Case #"<<i<<": ";
        solve();
        cout<<endl;
    }
}