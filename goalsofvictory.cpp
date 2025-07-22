#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string>
#include<stack>
#include<queue>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,ans = 0;
        cin >> n;
        vector<int> arr(n-1);
        for(int i=0 ; i < n-1 ; i++){
            cin >> arr[i];
            ans = ans + -(arr[i]);
        }
        cout << ans << endl;
    }
}