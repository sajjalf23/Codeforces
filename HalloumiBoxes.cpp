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
        long long n , k;
        cin >> n >> k;
        vector<long long> arr(n);
        bool sorted = true;
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
            if(sorted && i > 0 && arr[i] < arr[i-1])
                sorted = false;
        }
        if(n < 2){
            cout << "YES" << endl;
            continue;
        }
        if(sorted){
            cout << "YES" << endl;
            continue;
        }
        if(!sorted && k < 2){
            cout << "NO" << endl;
            continue;
        }
        else{
            cout << "YES" << endl;
            continue;
        }
    }
    return 0;
}