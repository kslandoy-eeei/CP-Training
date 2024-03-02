#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    int know;
    int problems = 0;

    while (n--)
    {
        int sum = 0;

        for (int i = 0; i < 3; i++)
        {
            cin >> know;
            sum += know;
        }

        if (sum >= 2)
        {
            problems++;
        }
    }

    cout << problems << endl;
}
