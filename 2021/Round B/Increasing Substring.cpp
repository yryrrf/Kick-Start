#include <iostream>
#include <string>
using namespace std;
int main()  {
    int T;
    cin >> T;
    for(int i = 1; i<=T; i++){
        int N;
        cin >> N;
        string word;
        cin >> word;
        int count = 1;
        cout<<"Case #" << i << ": "<<count<<" ";
        for(int j = 1; j<word.size(); j++){
            if((word[j] - 'A') > (word[j-1] - 'A')){
                count++;
            }else{
                count = 1;
            }
            cout<<count << " ";
        }
        cout<<endl;
    
    }

}