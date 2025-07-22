#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    long long ans = ((t*t) << 1) - t;
    cout << ans << endl;
}
