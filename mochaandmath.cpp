#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n,0);
        cin >> a[0];
        int ans = a[0];
        for(int i = 1; i < n ; i++){
            cin >> a[i];
            ans &= a[i];
        }
        cout << ans << endl;
    }
}