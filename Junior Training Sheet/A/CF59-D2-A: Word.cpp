#include <bits/stdc++.h>
#include <cctype>
using namespace std;

int main()
{
    vector<char> uppers;

    vector<char> lowers;

    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (tolower(s[i]) == s[i])
        {
            lowers.push_back(s[i]);
        }

        else
        {
            uppers.push_back(s[i]);
        }
    }

    if (lowers.size() > uppers.size())
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower); 
        cout << s << endl;
    }

    else if (lowers.size() < uppers.size())
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }

    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }
}
