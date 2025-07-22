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
        int n,k,a;
        cin >> n >> k;
        bool ans = false;
        for(int i = 0; i < n ; i++){
            cin >> a;
            if(a == k){
                ans = true;
            }
        }
        if(ans)
            cout << "Yes" << endl;
        else 
            cout << "No" << endl;
    }
}