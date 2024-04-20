/*

This must be a correct solution.
Say, we have a vector of heights {h1, h2, h3, h4, ..., hn};
where hi is the maximmum height of the buildings at coordinate i.

This solution goes like this:
After coming up with the vector of heights, iterate through the vector and if there is a height change at index i,
print i and the height at i.

The testcase given on UVa has the following final heights vector:
11 11 13 13 13 13 13 13 13 0 0 7 7 7 7 7 3 3 18 18 18 18 13 13 13 13 13 13 13

The output is:
1 11 3 13 9 0 12 7 16 3 19 18 22 3 23 13 29 

The first three numbers (1, 11, 3) show that everytime the height changes at index i, i is printed along with the ith height.
In the next case (3, 13, 9) however, the height changed at index 10, but 9 was printed along with the 10th height.

Test case is flawed I suppose.

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

        for (int i = l; i < r + 1; i++)
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

    for (int i = leftmost; i < rightmost + 1; i++)
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

    cout << rightmost << " 0";
}