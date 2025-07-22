#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string s;
    cin >> s;
    int zero =0 , one = 0;
    for(char c: s){
        if(c == '0'){
            zero++;
        }
        if(c == '1'){
            one++;
        }
    }
    if(min(zero,one) %2 == 0){
        cout << "NET" << endl;
    }
    else
        cout << "DA" << endl;
    }

}