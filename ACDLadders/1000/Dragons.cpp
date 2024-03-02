#include <bits/stdc++.h>
using namespace std;

int main()
{
    int s, n;
    bool pass = true;
    vector<pair<int, int>> dragons;
    cin >> s >> n;

    while (n--)
    {
        int x, y;

        cin >> x >> y;

        dragons.push_back(pair<int, int> (x, y));
    }

    sort(dragons.begin(), dragons.end());

    for (int i = 0; i < dragons.size(); i++)
    {
        if (s > dragons[i].first)
        {
            s += dragons[i].second;
        }

        else
        {
            pass = false;
            break;
        }
    }

    if (pass)
    {
        cout << "YES" << endl;
    }

    else
    {
        cout << "NO" << endl;
    }
}
