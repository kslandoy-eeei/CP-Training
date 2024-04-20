/*
Create a vector of heights (named heights) with initial values set to zero.
For each input Li, Hi, Ri, modify the vector such that:
for all i in range [Li, Ri], 
heights[i] = max(heights[i], Hi)

After taking all inputs, iterate through the heights vector.
For each change in height value, print the index and the height.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> heights(10000, 0);
    int l, h, r, rightmost, leftmost;

    bool first = true;

    while (cin >> l >> h >> r)
    {
        if (first)
        {
            rightmost = r;
            leftmost = l;
            first = false;
        }

        if (r > rightmost)
        {
            rightmost = r;
        }

        for (int i = l; i < r; i++)
        {
            heights[i] = max(heights[i], h);
        }
    }

    for (int i = leftmost; i < rightmost; i++)
    {
        cout << heights[i] << " ";
    }

    cout << endl;


    int currentHeight;

    for (int i = leftmost; i < rightmost + 1; ++i)
    {
        if (i == leftmost)
        {
            printf("%d %d ", i, heights[i]);
            currentHeight = heights[i];
        }
        else if (currentHeight != heights[i])
        {
            printf("%d %d ", i, heights[i]);
            currentHeight = heights[i];
        }
    }
}