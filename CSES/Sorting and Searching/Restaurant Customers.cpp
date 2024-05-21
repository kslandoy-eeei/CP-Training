#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> time_map;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        time_map.push_back({a, 1});
        time_map.push_back({b, -1});
    }

    sort(time_map.begin(), time_map.end());

    int curr_c = 0, max_c = 0;

    for (auto const& [time, val] : time_map)
    {
        curr_c += val;
        max_c = max(curr_c, max_c);
    }

    cout << max_c << endl;
}