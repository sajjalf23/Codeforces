#include<iostream>
#include<cmath>

using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        long long a;
        cin >> a;
        if(a == 1){
            cout << 0 << endl;
            continue;
        }
        int cnt = 0;
        bool nope = false;
        while(a != 1 ){
           if(a % 6 == 0){
            a = a / 6;
            cnt++;
           }
           else{
            a = a * 2;
            cnt++;
            if(a % 6 != 0){
                nope = true;
               break;
            }
           }
        }
        if(nope){
            cout << -1 << endl;
        }
        else{
            cout << cnt << endl;
        }
    }
}