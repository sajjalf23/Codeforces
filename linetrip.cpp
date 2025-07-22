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
        int n , x;
        cin >> n >> x;
        vector<int> a(n);
        cin >> a[0] ;
        int max1 = a[0] - 1;
        for(int i = 1 ; i < n ; i++){
            cin >> a[i];
            max1 = max(max1 , a[i] - a[i-1]);
        }
        max1 = max(max1 , (x - a[n-1]) *2);
        max1 = max(max1 , a[0]);
        cout << max1 << endl;
    }
}