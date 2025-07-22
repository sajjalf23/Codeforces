#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        string a;
        cin >> a;
        int ans = 1, max1 = 1;
        for (int i = 1; i < x; i++)
        {
            if (a[i] == a[i - 1])
            {
                max1++;
            }
            else
            {
                
                max1 = 1;
            }
            ans = max(ans, max1);
        }
        cout << ans+1 << endl;
    }
    return 0;
}