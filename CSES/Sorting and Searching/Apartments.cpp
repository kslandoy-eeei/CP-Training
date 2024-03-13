#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, k, ctr = 0, i = 0, j = 0;

    cin >> n >> m >> k;

    vector<int> applicants(n), apartments(m);

    for (int i = 0; i < n; i++)
    {
        cin >> applicants[i];
    }

    for (int i = 0; i < m; i++)
    {
        cin >> apartments[i];
    }

    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());

    while (i < n && j < m)
    {
        if (abs(apartments[j] - applicants[i]) <= k)
        {
            j++;
            i++;
            ctr++;
        }

        else if (applicants[i] - apartments[j] > k)
        {
            j++;
        }

        else
        {
            i++;
        }
    }

    cout << ctr;
}
