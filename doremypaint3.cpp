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
        int n,a;
        cin >> n;
        bool done = false;
        int f=0,s=0 ,ff=0,sf =0;
        for(int i = 0 ; i < n ; i++){
            cin >> a;
            if(f == 0 || f == a){  f = a; ff++; }
            else if( s == 0 || s == a){  s = a; sf++;}
            else {done = true;}
        }
        if(done){
            cout << "No" <<endl;
        }
        else if(sf == 0 || abs(ff - sf) <= 1){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" <<endl;
        }
    }
}