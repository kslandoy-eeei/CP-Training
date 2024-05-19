#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, x;
    cin >> n >> x;

    vector<int> weights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> weights[i];
    }

    sort(weights.begin(), weights.end());
    int gondola = 0;

    int i = 0;
    int j = weights.size() - 1;

    while (i <= j)
    {
        if (i == j)
        {
            gondola++;
            break;
        }

        if (weights[i] + weights[j] <= x)
        {
            i++;
            j--;
        }

        else
        {
            j--;
        }

        gondola++;
    }

    cout << gondola;
}