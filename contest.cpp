#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, r, L, R, doors = 0;
        cin >> l >> r;
        cin >> L >> R;

        if (l == L && r == R) cout << r - l << endl;
        else if (r == R)
        {
            cout << abs((max(l, L) - 1) - r);
        }

        else if (l == L)
        {
            cout << abs(l - (min(r, R) - 1));
        }
    }
}