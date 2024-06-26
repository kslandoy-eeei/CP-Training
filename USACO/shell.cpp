/*

Shell Game
https://usaco.org/index.php?page=viewproblem2&cpid=891

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("shell.in", "r", stdin);
    freopen("shell.out", "w", stdout);
    int n;
    int a, b, g;
    cin >> n;

    int shell_at_pos[3] = {1, 2, 3};
    int shell_pick_ctr[3] = {0, 0, 0};

    while (n--)
    {
        cin >> a >> b >> g;
        swap(shell_at_pos[a - 1], shell_at_pos[b - 1]);
        shell_pick_ctr[shell_at_pos[g - 1]]++;
    }

    cout << *max_element(shell_pick_ctr, shell_pick_ctr + 3) << endl;
}
