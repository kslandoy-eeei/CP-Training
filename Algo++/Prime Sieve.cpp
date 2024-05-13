#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, ctr = 0;

    cin >> n >> q;

    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;

    for (int i = 2; i < floor(sqrt(n)) + 1; i++)
    {
        if (primes[i])
        {
            ctr++;

            for (int j = 2*i; j < n + 1; j += i)
            {
                primes[j] = false;
            }
        }
    }

    for (int i = floor(sqrt(n)) + 1; i < n + 1; i++)
    {
        if (primes[i])
        {
            ctr++;
        }
    }

    cout << ctr << endl;

    while (q--)
    {
        int x;
        cin >> x;

        cout << primes[x] << endl;

    }
}