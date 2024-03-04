#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int len = 0, maxlen = 0;
    cin >> s;

    char prev = s[0];

    for (auto &c : s)
    {
        if (c == prev)
        {
            len++;
        }

        else
        {
            maxlen = max(maxlen, len);
            len = 1;
        }
        
        maxlen = max(maxlen, len);
        prev = c;
    }

    cout << (maxlen) << endl;
}
