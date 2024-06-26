#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<pair<int, int>> nums;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        nums.push_back({k, i + 1});
    }

    sort(nums.begin(), nums.end());

    int i = 0;
    int j = nums.size() - 1;

    while (i < j)
    {
        if (nums[i].first + nums[j].first > x)
        {
            j--;
        }

        else if (nums[i].first + nums[j].first < x)
        {
            i++;
        }

        else if (nums[i].first + nums[j].first == x)
        {
            cout << nums[i].second << " " << nums[j].second << endl;
            return 0;
        }
    }

    cout << "IMPOSSIBLE" << endl;
}