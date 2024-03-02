#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long ans, n, m, a;

    cin >> n >> m >> a;
    ans = ceil((double)n/a) * ceil((double)m/a);
    cout << ans << endl;
}
