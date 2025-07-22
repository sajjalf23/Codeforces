#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string>
#include<stack>
#include<queue>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int ans = 0;
        vector<vector<char>> twoD(10 , vector<char>(10));
        for(int i = 0 ; i < 10 ;i++){
            for(int j=0 ; j < 10 ; j++){
                cin >> twoD[i][j];
                if(twoD[i][j] == 'X'){
                    ans = ans + min({i,j,9-i,9-j})+1;
                    // if(i <= 4 && j >= i && j <= (9-i)){
                    //     ans += i+1;
                    // }
                    // else if(i > 4 && j >= (9-i) && j <= i){
                    //     ans += (9-i)+1;
                    // }
                    // else if(j <= 4 && i >= j && i <= (9-j)){
                    //     ans += j+1;
                    // }
                    // else if(j > 4 && i >= (9-j) && i <= j){
                    //     ans += (9-j)+1;
                    // }
                }
            }
        }
        cout << ans << endl;
    }
}