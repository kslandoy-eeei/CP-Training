#include <bits/stdc++.h>
using namespace std;

set<int> visited;
map<int, vector<int>> bridges;

void dfs(int island)
{
    if (find(visited.begin(), visited.end(), island) == visited.end())
    {
        visited.insert(island);

        for (auto &neighbor : bridges[island])
        {
            dfs(neighbor);
        }
    }
}

int main()
{
    int n, m, a, b;

    cin >> n >> m;

    for (int i = 1; i < n + 1; i++)
    {
        bridges[i];
    }

    while (m--)
    {
        cin >> a >> b;
        bridges[a].push_back(b);
        bridges[b].push_back(a);
    }

    dfs(1);
    if (visited.size() == n) cout << "YES\n";
    else cout << "NO\n";
}