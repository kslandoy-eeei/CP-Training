#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long long moves = 0;

    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            moves += nums[i - 1] - nums[i];
            nums[i] = nums[i - 1];
        }
    }

    cout << moves;
}
