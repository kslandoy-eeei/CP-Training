#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> nums(n), diffs(n);
        bool jolly = true;
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];

            if (i != 0)
            {
                diffs[i] = abs(nums[i] - nums[i-1]);
            }
        }

        sort(diffs.begin(), diffs.end());

        for (int i = 0; i < n - 1; i++)
        {
            if (diffs[i] == diffs[i + 1] || diffs[i] >= n || diffs[i + 1] >= n)
            {
                jolly = false;
                break;
            }
        }

        if (jolly) cout << "Jolly\n";
        else cout << "Not jolly\n";
    }
}