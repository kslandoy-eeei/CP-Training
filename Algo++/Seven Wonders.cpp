#include <bits/stdc++.h>
using namespace std;

int main()
{
    string cards;
    int min = 0;

    map<char, int> count {{'T', 0},
                          {'C', 0},
                          {'G', 0},
                         };

    cin >> cards;

    for (int i = 0; i < cards.length(); i++)
    {
        count[cards[i]]++;
    }

    vector<char> letters {'T', 'C', 'G'};

    for (char &c: letters)
    {
        if (min == 0)
        {
            min = count[c];
        }

        else if (count[c] < min)
        {
            min = count[c];
        }
    }

    int score = pow(count['T'], 2) + pow(count['C'], 2) + pow(count['G'], 2) + (min * 7);

    cout << score;
}