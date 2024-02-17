#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, h;

    int width = 0;

    cin >> n >> h;

    vector<int> heights(n);

    for (int i = 0; i < n; i++)
    {
        cin >> heights[i];
    }

    for (int &i : heights)
    {
        if (i > h)
        {
            width += 2;
        }

        else
        {
            width ++;
        }
    }

    cout << width << endl;
}
