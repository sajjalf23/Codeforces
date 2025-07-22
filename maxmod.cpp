#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<string>
#include<stack>
#include<queue>
#include<cmath>
#include<numeric>
#include<climits>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2 == 0){
            cout << -1 <<endl;
            continue;
        }
        int i = 1,num=n;
        for( int j=1; j < num/2+1 ;j++ ){
            if(i > 2){
                i+=1;
            }
            cout << i << " ";
            cout << n << " ";
            n -= 2;
            i++;
        }
        if(i>2)
        cout << i+1 <<endl;
        else
        cout << i <<endl;
    }
}