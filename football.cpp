#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    bool done = false;
    int  cnt = 0;
    for(int i = 0 ; i < s.size() ; i++){
        if(cnt == 6){
            done = true;
            break;
        }
        if(s[i] == s[i+1]){
           cnt++;
        }
        else{
            cnt = 0;
        }
    }
    if(done){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}