#include<iostream>
#include<string>
#include<vector>
#include<algorithm>          // find(x) != std::string::npos
#include<cmath>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n , m;
        cin >> n >> m;
        string a , b;
        cin >> a;
        cin >> b;
        string s = a;
        int cnt = 0;
        if(a.find(b) != std::string::npos){
            cout << 0 << endl;
            continue;
        }
        while(s.length() <= 25){
                s = s + s;
                cnt++;
                if(s.find(b) != std::string::npos){
                    cout << cnt << endl;
                    break;
                }
            }
        
        if(s.find(b) == std::string::npos){
            cout << -1 << endl;
        }
    }
}