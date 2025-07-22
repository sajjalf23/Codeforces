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
        int n , a;
        cin >> n;
        bool done = false;
        cin >> a;
        if(a == 1){
            done = true;
        }
        for(int i = 1 ; i < n ; i++){
            cin >> a;
        }
        if(done){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}