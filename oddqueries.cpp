#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int r , n;
        cin >> n >> r;
        vector<long long> arr(n,0);
        cin >> arr[0];
        for(int i = 1; i < n ; i++){
            cin >> arr[i];
            arr[i]+=arr[i-1];
        }
        while(r--){
            long long  s,e,k;
            cin >> s >> e >> k;
            int z= s == 1? 0:arr[s-2];
            long long sum = arr[n-1] + (e-s+1)*k - (arr[e-1]-z);
            if(sum % 2!= 0){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
    }
}