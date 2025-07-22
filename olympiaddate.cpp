#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<unordered_map>
#include<map>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, al=0;
        cin >> n;
        if(n < 8){
            while(n--)  cin >> al;
            cout << 0 << endl;
            continue;
        }
        vector<int> a(n);
        int zero=0 , one=0 , three=0, two=0 , five=0 ,ans = 0 ;
        bool done = false;
        for(int i = 0 ; i < n ; i++){
            cin >> a[i];
            if(a[i] == 0)  zero++;
            if(a[i] == 3)  three++;
            if(a[i] == 2)  two++;
            if(a[i] == 5)  five++;
            if(a[i] == 1)  one++;
            if(!done && one >= 1 && zero >= 3 && three >= 1 && five >= 1 && two >= 2){
                ans = i+1;
                done = true;
            }
        }
        cout << ans << endl;
    }
}