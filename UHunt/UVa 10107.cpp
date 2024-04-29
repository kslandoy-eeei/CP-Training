#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> nums;
    int n, mid;

    while (cin >> n)
    {
        nums.push_back(n);
        sort(nums.begin(), nums.end());


        if (nums.size() == 1)
        {
            mid = nums[0];
        }

        else if (nums.size() % 2 == 0)
        {
            mid = (nums[(nums.size() / 2)] + nums[(nums.size() / 2) - 1]) / 2;
        }

        else
        {
            mid = nums[ceil(nums.size() / 2)];
        }

        cout << mid << endl;
    }

}