
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;

        if (x > y) {
            swap(a, b);
            swap(x, y);
        }

        int count = 0;

        while (k >= a) {
            long long use = (k - a) / x + 1;
            count += use;
            k -= use * x;
        }

        while (k >= b) {
            long long use = (k - b) / y + 1;
            count += use;
            k -= use * y;
        }

        cout << count << endl;
    }
    return 0;
}
