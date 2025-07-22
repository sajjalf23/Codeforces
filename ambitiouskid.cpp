#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string>
#include<stack>
#include<queue>
#include<cmath>
#include<climits>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    int maxlz = INT_MIN  , mingz = INT_MAX;
    for(int i =0 ; i < n ; i++){
        cin >> arr[i];
        if(arr[i] > 0){
            mingz = min(mingz,arr[i]);
        }
        else{
            maxlz = max(maxlz,arr[i]);
        }
    }
    if(maxlz == INT_MIN){
        cout << mingz <<endl;
    }
    else if(mingz == INT_MAX){
        cout << abs(maxlz) << endl;
    }
    else {
        int op = min(abs(maxlz) , mingz);
        cout << op << endl;
    }
}