#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    set<int> numset(nums, nums + n);

    cout << numset.size() << endl;
}
