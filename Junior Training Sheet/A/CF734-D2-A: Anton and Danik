#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<char> outcome(n);

    for (int i = 0; i < n; i++)
    {
        cin >> outcome[i];
    }
    
    int A = 0;
    int D = 0;

    for (int i = 0; i < n; i++)
    {
        if (outcome[i] == 'A')
        {
            A++;
        }

        else
        {
            D++;
        }
    }

    if (A == D)
    {
        cout << "Friendship" << endl;
    }

    else if (A > D)
    {
        cout << "Anton" << endl;
    }

    else
    {
        cout << "Danik" << endl;
    }
}
