/*

Simulation

Replicate the tower of hanoi game.
Iterate through all towers for each ball number.
If tower i contains balls, check the sum of the top ball and the ball to be placed.
If the sum is a perfect square, place the current ball on that tower.
Else, move to another tower.

If we end up iterating through all towers and the ball has not been placed in any,
print the (i-1)th ball number, where i-1 is the number of the ball that was LAST PLACED (not the current ball).

*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        vector<int> towers(n, 0);

        int ballNum = 1;

        bool canPlace = true;

        while (canPlace)
        {
            canPlace = false;

            for (int i = 0; i < n; i++)
            {
                if (towers[i] == 0)
                {
                    towers[i] = ballNum;
                    ballNum++;
                    canPlace = true;
                    break;
                }

                else
                {
                    int refBall = towers[i];
                    int ballSum = ballNum + refBall;

                    long long sqrtBS = sqrt(ballSum);

                    if (ballSum == pow(sqrtBS, 2))
                    {
                        towers[i] = ballNum;
                        ballNum++;
                        canPlace = true;
                        break;
                    }
                }
            }
        }

        cout << ballNum - 1 << endl;
    }
}