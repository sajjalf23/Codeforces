#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n ;
    cin >> n;
    vector<int> arr(12,0);
    for(int i = 0; i < 12; i++){
        cin >> arr[i] ;
    }
    sort(arr.begin(),arr.end(),std::greater<>());
    int sum = 0,i=0;
    while(sum < n && i < 12){
        sum += arr[i];
        i++;
    }
    if(sum < n){
        cout << -1 << endl;
        return 0;
    }
    cout << i << endl;
}