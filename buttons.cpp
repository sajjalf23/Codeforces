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
        long long a,b,c;
        cin >> a ;
        cin >> b;
        cin >> c;
        if(b+c >= a+c){
            if(b+c == a+c){
                if(c % 2 == 0)
                cout << "Second" << endl;
                else
                cout << "First" << endl;
                continue;
            }
            cout << "Second" << endl;
        }
        else{
            cout << "First" << endl;
        }
    }
    return 0;
}










