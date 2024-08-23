/*

Mixing Milk
https://usaco.org/index.php?page=viewproblem2&cpid=855

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("mixmilk.in", "r", stdin);
    freopen("mixmilk.out", "w", stdout);
    int cap[3], milk[3];

    for (int i = 0; i < 3; i++)
    {
        cin >> cap[i] >> milk[i];
    }

    for (int i = 0; i < 100; i++)
    {
        if (milk[i % 3] > cap[(i + 1) % 3] - milk[(i + 1) % 3])
        {
            int pour = cap[(i + 1) % 3] - milk[(i + 1) % 3];
            milk[(i + 1) % 3] += pour;
            milk[i % 3] -= pour;
        }

        else if (milk[i % 3] <= cap[(i + 1) % 3] - milk[(i + 1) % 3])
        {
            milk[(i + 1) % 3] += milk[i % 3];
            milk[i % 3] = 0;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        cout << milk[i] << endl;
    }

}