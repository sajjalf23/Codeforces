#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
    int n;
    cin >> n ;
    while(n--){
        int t;
        cin >> t;
        vector<int> num(t,0);
        for(int i = 0 ; i < t ; i++){
            cin >> num[i];
        }
    vector<int> ans;
    ans.push_back(num[0]);
    for(int i = 1 ; i < t ; i++){
        if(num[i] > num[i-1] || num[i] == num[i-1]){
           ans.push_back(num[i]);
        }
        else{
            if(min(num[i],num[i-1])-1 == 0)
               ans.push_back(1);
            else
               ans.push_back(min(num[i],num[i-1])-1);
            ans.push_back(num[i]);
        }
    }
    cout << ans.size() <<endl;
    for(int i = 0 ; i < ans.size() ; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    }
    return 0;
}








