#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        cout << 1 << " ";
        for (int i = 3; i <= t - 1; i += 2)
        {
            cout << i + 1 << " " << i << " ";
        }
        if (t % 2 != 0)
        {
            cout << t << " " << 2 << endl;
            continue;
        }
        cout << 2 << endl;
    }
}