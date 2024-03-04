#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	long n, num;
 
    cin >> n;
 
    long sum = n * (n + 1) / 2;
 
    for (int i = 0; i < n - 1; i++)
    {
        cin >> num;
        sum -= num;
    }
 
    cout << sum;
    return 0;
}
