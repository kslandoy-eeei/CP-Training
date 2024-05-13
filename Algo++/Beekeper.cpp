// Not fixed

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int best = 0, curr = 0;
    string name;
    string ss[6] = {"aa", "ee", "ii", "oo", "uu", "yy"};

    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        vector<string> names(n);

        for (int i = 0; i < n; i++)
        {
            cin >> names[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (names[i].find(ss[j]) != string::npos)
                {
                    curr += 1;
                }
            }

            if (curr > best)
            {
                best = curr;
                name = names[i];
            }
        }

        cout << name << endl;
    }
}