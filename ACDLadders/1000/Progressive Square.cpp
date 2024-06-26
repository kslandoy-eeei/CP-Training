#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, c, d;
        cin >> n >> c >> d;

        vector<int> nums;

        for (int i = 1; i <= n*n; i++)
        {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        sort(nums.begin(), nums.end());

        int first_num = nums[0];
        vector<int> prog;
        for (int i = 0; i < n; i++)
        {
            int column = first_num + (i * c);
            for (int j = 0; j < n; j++)
            {
                if (i == 0 && j == 0) prog.push_back(first_num);
                else
                {
                    prog.push_back(column + (j * d));
                }
            }

            column += c;
        }

        sort(prog.begin(), prog.end());

        if (prog == nums) cout << "YES\n";
        else cout << "NO\n";
    }
}