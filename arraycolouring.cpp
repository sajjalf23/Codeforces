#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        vector<int> arr(t,0);
        int mineven= INT_MAX , minodd = INT_MAX;
        for(int i = 0 ; i < t ; i++){
            cin >> arr[i];
            if(arr[i] %2 == 0){
                mineven = min(mineven , arr[i]);
            }
            if(arr[i] %2 != 0){
                minodd = min(minodd , arr[i]);
            }
        }
        int sume  = 0,sumo = 0 ,counte = 0,counto = 0;
        for(int i = 0 ; i < t ; i++){
            if(arr[i] == mineven && counte == 0){
                counte = 1;
            }
            else
                sume+= arr[i];
            if(arr[i] == minodd && counto == 0){
                counto = 1;
            }
            else
                sumo+= arr[i];
        }
        if(sume % 2 == 0){
            cout << "Yes" << endl;
            continue;
        }
        if(sumo %2 != 0){
            cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
    }
}