#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k;
        cin >> k;
        vector<int> arr(n,0);
        for(int i =0 ; i < n ; i++){
            cin >> arr[i];
        }
        sort(arr.begin(),arr.end());
        int ans = 1 ;int cnt = 1;
        for(int i = 1 ; i < n ; i++){
            if((arr[i]- arr[i-1]) > k){
             cnt = 1;
            }else{
                cnt++;
            }
            ans=max(ans,cnt);
        }
        cout << n - ans << endl;
    }
}