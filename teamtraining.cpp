#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x;
        cin >> x;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end(), greater<int>());

        int team = 0, size = 0, str = 0;
        for (int i = 0; i < n; i++)
        {
            str = a[i];
            size++;
            if (str * size >= x)
            {
                team++;
                str = 0;
                size = 0;
            }
        }
        cout << team << endl;
    }
    return 0;
}