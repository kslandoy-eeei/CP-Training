#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> lucky = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};

    int n;

    cin >> n;

    for (auto &num : lucky)
    {
        if (n % num == 0)
        {
            cout << "YES\n";
            return 0;
        }
    }

    cout << "NO\n";
}
