#include <iostream>
#include <vector>
#include <algorithm>
#include<climits>

using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int t, h, m;
        cin >> t >> h >> m;
        vector<pair<int, int>> arr;
        for (int i = 0; i < t; i++)
        {
            int a, b;
            cin >> a >> b;
            arr.push_back({a, b});
        }
        int mini = INT_MAX;
        int sleep = h * 60 + m;
        for (int i = 0; i < t; i++)
        {
            int h1 = arr[i].first * 60 + arr[i].second;
            if(h1 >= sleep){
                mini = min(mini,h1 - sleep);
            }
            else{
                mini = min(mini , (1440 - sleep) + h1);
            }
        }
        if(mini == 0){
            cout << 0 << " " << 0 <<endl;
        }
        else{
            h = mini / 60;
            m = mini % 60;
            cout << h << " " << m << endl;
        }
    }
}