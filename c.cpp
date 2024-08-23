#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int matrix[n][n];

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cin >> matrix[i][j];
            }
        }

        for (int j = 0; j < n; j++)
        {
            for (int i = 0; i < n; i++)
            {
                cout << matrix[i][j];
            }

            cout << endl;
        }

        int ctr = 0;

        int column = 0, row = 0;

        // complete search through everything
        // input size is small enough
        // hackerearth : Codemonk (Monk and Inversions)
        while (column < n * n)
        {
            for (int j = row; j < n; j++)
            {
                for (int i = column % n; i < n; i++)
                {
                    if (matrix[row][column] > matrix[j][i]) ctr++;
                }
            }

            column++;
            row = column / n;
        }
        cout << ctr << endl;
    }

}