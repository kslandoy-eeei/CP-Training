#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    vector<char> distinct;

    cin >> name;

    for (int i = 0; i < name.size(); i++)
    {
        if (find(distinct.begin(), distinct.end(), name[i]) == distinct.end())
        {
            distinct.push_back(name[i]);
        }
    }

    if (distinct.size() % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }

    else
    {
        cout << "IGNORE HIM!\n";
    }
}
