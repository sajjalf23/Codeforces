#include <iostream>
#include <vector>
#include <algorithm>
#include <limits.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t;
        cin >> t;
        int k;
        cin >> k;
        string ans = "";
        for (int i = 0; i < t; i++)
        {
            if (k > 0)
            {
                ans += "1";
                k--;
            }
            else
            {
                ans += "0";
            }
        }
        cout << ans << endl;
    }
}
