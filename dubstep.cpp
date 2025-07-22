#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string ans="";
    for(int i = 0 ; i < s.size();i++){
        if(s[i] == 'W'){
            if(s.substr(i,3) == "WUB" ){
            if(ans != "" && s.size()!=i+3){
                ans+=" ";
            }
            i+=2;
            }
            else{
                ans+=s[i];
            }
        }
        else{
            ans+= s[i];
        }
    }
    cout << ans << endl;
}