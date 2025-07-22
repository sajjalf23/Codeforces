#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, j, k;
        cin >> n >> j >> k;
        int a,maxx=0,jth;
        for(int i = 0; i < n ; i++){
            cin >> a;
            maxx = max(a,maxx);
            if(j-1 == i){
                jth = a;
            }
        }
        if(k != 1){
            cout << "Yes" << endl;
        }
        else if(jth == maxx ){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
}