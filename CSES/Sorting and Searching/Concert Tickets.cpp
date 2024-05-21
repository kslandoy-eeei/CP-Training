#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, p, c;
    multiset<int> tickets;

    cin >> n >> m;

    for (int i = 0; i < n; i ++)
    {
        cin >> p;
        tickets.insert(p);
    }

    for (int i = 0; i < m; i++)
    {
        cin >> c;
        auto it = tickets.upper_bound(c);
        if (it == tickets.begin())
        {
            cout << -1 << endl;
        }

        else
        {
            cout << *(--it) << endl;
            tickets.erase(it);
        }
    }
}