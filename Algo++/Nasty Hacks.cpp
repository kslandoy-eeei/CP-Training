#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, r, e, c;
    cin >> n;

    while (n--)
    {
        cin >> r >> e >> c;

        if (e - c > r)
        {
            cout << "advertise\n";
        }

        else if (e - c < r)
        {
            cout << "do not advertise\n";
        }

        else if (e - c == r)
        {
            cout << "does not matter\n";
        }
    }
}