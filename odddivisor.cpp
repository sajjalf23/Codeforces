#include <iostream>
#include<cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        long long a;
        cin >> a;
        if(log2(a) == floor(log2(a))){
            cout << "NO" << endl;
            continue;
        }
        cout << "YES" << endl;
    }
}