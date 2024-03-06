#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n;
 
    cin >> n;

    if (n == 2 || n == 3)
    {
        cout << "NO SOLUTION";
        return 0;
    }

    else if (n == 1)
    {
        cout << 1;
        return 0;
    }
 
    vector<int> nums;
 
    for (int i = 2; i <= n; i+=2)
    {
        nums.push_back(i);
    }
 
    for (int i = 1; i < n; i += 2)
    {
        nums.push_back(i);
    }

    if (n % 2 == 1)
    {
        nums.push_back(n);
    }

    for (auto &num : nums)
    {
        cout << num << " ";
    }

    return 0;
}
