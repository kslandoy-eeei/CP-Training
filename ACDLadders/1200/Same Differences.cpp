#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        long long total = 0;
        cin >> n;
        
        map<int, int> freq;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            x -= i;
            total += freq[x];
            freq[x]++;
        }

        cout << total << endl;
    }
}