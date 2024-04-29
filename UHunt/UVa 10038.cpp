#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> nums(n);
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        bool jolly = true;

        for (int i = 0; i < n - 1; i++)
        {
            if (abs(nums[i] - nums[i + 1]) >= n || abs(nums[i] - nums[i + 1]) == 0)
            {
                jolly = false;
                break;
            }
        }

        if (jolly)
        {
            cout << "Jolly\n";
        }

        else
        {
            cout << "Not jolly\n";
        }
    }
}