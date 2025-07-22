#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;
long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());
        if(n == 2){
            if(a[0] == a[1]){
                cout << "Yes" <<endl;
            }
            else{
                cout << "No" <<endl;
            }
            continue;
        }
        bool possible = false;
        int m = a[0];
        for (int i = n-2; i > 0; i--) {
            a[i] = gcd(a[i], a[i+1]);
            if (m == a[i]) {
                possible = true;
                break;
            }
        }
        if (possible) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}

