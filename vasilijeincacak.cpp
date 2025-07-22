#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        long long n1 , k , x;
        cin >> n1 >> k >> x;
        long long s = (k*(k+1))/2;
        long long l = (k*((2*n1)-k+1))/2;  // u should divide /2 atlast  otherwise use double
        if(s <= x && x <= l){
           cout << "Yes" << endl;
            continue;
        }
        cout << "No" << endl;
        
    }
}