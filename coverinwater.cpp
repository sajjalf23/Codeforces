#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n;
        cin >> s;
        int cnt = 0 , maxconsecutive = 0 , conseq = 0;
        for(char ch : s){
            if(ch == '.'){
                cnt++;
                conseq++;
            }
            else{
                maxconsecutive = max(maxconsecutive, conseq);
                conseq = 0;
            }
        }
        maxconsecutive = max(maxconsecutive, conseq);
        if(cnt < 1){
            cout << 0 << endl;
        }
        else if(maxconsecutive >= 3){
            cout << 2 << endl;
        }
        else{
            cout << cnt << endl;
        }
    }
    return 0;
}