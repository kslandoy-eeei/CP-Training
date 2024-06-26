// activity selection problem?
#include <bits/stdc++.h>
using namespace std;

struct cmp
{
    inline bool operator()(pair<int, int> &m1, pair<int, int> &m2)
    {
        return m1.second < m2.second;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> movies(n);

    for (int i = 0; i < n; i++)
    {
        cin >> movies[i].first >> movies[i].second;
    }

    sort(movies.begin(), movies.end(), cmp());

    int last_end = 0;
    int movie_count = 0;

    for (auto &p : movies)
    {
        if (p.first >= last_end)
        {
            last_end = p.second;
            movie_count++;
        }
    }

    cout << movie_count << endl;
}