#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        int x;
        cin >> x;
        vector<int> arr(t);
        int num = 0, dummy = 0;
        bool first = 0;
        for(int i = 0 ; i < t ; i++){
            cin >> arr[i];
            if(arr[i] == 1 && first == 0){
                num = 1;
                first = 1;
            }
            else if(first == 1){
                dummy++;
            }
            if(arr[i] == 1){
                num+= dummy;
                dummy = 0;
            }
        }
        if(num > x){
            cout << "No" <<endl;
        }
        else{
            cout << "Yes" << endl;
        }
    }
}