#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    vector<char> vowels({'A', 'E', 'I', 'O', 'U', 'Y', 'a', 'e', 'i', 'o', 'u', 'y'});
    string new_s = "";

    cin >> s;

    for (auto &c : s)
    {
        if (find(vowels.begin(), vowels.end(), c) == vowels.end())
        {
            new_s.push_back('.');
            new_s.push_back((char)tolower(c));
        }
    }

    for (auto &c : new_s)
    {
        cout << c;
    }
}
