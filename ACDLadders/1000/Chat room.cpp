#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    map<int, char> hello = {{0, 'h'},
                            {1, 'e'},
                            {2, 'l'},
                            {3, 'l'},
                            {4, 'o'}};

    cin >> s;

    int hello_ctr = 0;

    for (auto &c : s)
    {
        if (c == hello[hello_ctr])
        {
            hello_ctr++;
        }
    }

    if (hello_ctr > 4)
    {
        cout << "YES\n";
    }

    else
    {
        cout << "NO\n";
    }

}
