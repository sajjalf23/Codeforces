#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;
        int ans = 0;
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        for(auto pair:freq){
            if(pair.second % 2!=0){
                ans++;
            }
        }
        if(ans-k > 1){
            cout << "No" <<endl;
        }
        else{
            cout<< "Yes" << endl;
        }
    }
}
