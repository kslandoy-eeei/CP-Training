#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool first = true;
    while (1)
    {
        int k;
        vector<int> nums;
        cin >> k;

        if (k == 0)
        {
            break;
        }

        if (first)
        {
            first = false;
        }

        else
        {
            cout << "\n";
        }

        for (int i = 0; i < k; i++)
        {
            int n;
            cin >> n;
            nums.push_back(n);
        }

        for (int i = 0; i < k - 5; i++)
        {
            for (int j = i + 1; j < k - 4; j++)
            {
                for (int l = j + 1; l < k - 3; l++)
                {
                    for (int m = l + 1; m < k - 2; m++)
                    {
                        for (int n = m + 1; n < k - 1; n++)
                        {
                            for (int o = n + 1; o < k; o++)
                            {
                                if (i == k - 4 && o == k - 1)
                                {
                                    printf("%d %d %d %d %d %d", nums[i], nums[j], nums[l], nums[m], nums[n], nums[o]);
                                }

                                else
                                {
                                    printf("%d %d %d %d %d %d\n", nums[i], nums[j], nums[l], nums[m], nums[n], nums[o]);
                                }
                            }
                        }
                    }
                }
            }
        }

    }
}
