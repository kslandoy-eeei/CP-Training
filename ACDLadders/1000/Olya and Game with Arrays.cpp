#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> arrays;

        for (int i = 0; i < n; i++)
        {
            int m;
            cin >> m;
            vector<int> nums(m);

            for (int j = 0; j < m; j++)
            {
                cin >> nums[j];
            }

            arrays.push_back(nums);
        }

        int ans = 0;

        for (auto &v : arrays)
        {
            sort(v.begin(), v.end());
            ans += 0 // complete this
        }
    }
}